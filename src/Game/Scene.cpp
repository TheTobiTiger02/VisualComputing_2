#include "Scene.h"
#include <AssetManager.h>
#include "glm/gtx/euler_angles.hpp"
#include "glm/gtc/matrix_transform.hpp"  // Für glm::lookAt und glm::perspective
#include "glm/gtx/string_cast.hpp"

Scene::Scene(OpenGLWindow * window) :
        m_window(window),
        cameraPos(0.0f, 0.0f, 0.0f), // Punkt an welcher sich die Kamera befindet
        target(0.0f, 0.0f, -1.0f), // Punkt auf was die Kamera schaut
        up(0.0f, 1.0f, 0.0f) // definiert die "oben" Richtung der Kamera (normalerweise 0,1,0)
{
    assert(window != nullptr);
    keyStatus[Key::W] = false;
    keyStatus[Key::S] = false;
    keyStatus[Key::A] = false;
    keyStatus[Key::D] = false;
}

Scene::~Scene()
{}

bool Scene::init()
{
    try
    {
        // Load shader
        m_assets.addShaderProgram("shader", AssetManager::createShaderProgram("assets/shaders/vertex.glsl", "assets/shaders/fragment.glsl"));
        m_shader = m_assets.getShaderProgram("shader");
        m_shader->use();

        // Würfel-Daten


        // Generate and activate VBO and upload data
        glGenBuffers(1, &vboID);
        glBindBuffer(GL_ARRAY_BUFFER, vboID);
        glBufferData(GL_ARRAY_BUFFER, sizeof(cubeVert), cubeVert, GL_STATIC_DRAW);

        // Generate and activate VAO
        glGenVertexArrays(1, &vaoID);
        glBindVertexArray(vaoID);

        // Describe VBO in the VAO
        glVertexAttribPointer(0, 3, GL_FLOAT, false, 24, 0);
        glEnableVertexAttribArray(0);
        glVertexAttribPointer(1, 3, GL_FLOAT, false, 24, (void*)12);
        glEnableVertexAttribArray(1);

        // Generate and activate IBO
        GLuint iboID;
        glGenBuffers(1, &iboID);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, iboID);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(cubeInd), cubeInd, GL_STATIC_DRAW);

        // Enable culling
        glEnable(GL_CULL_FACE);
        glFrontFace(GL_CCW);
        glCullFace(GL_BACK);

        // Initialize robot
        robot.initRobot();
        robot.rotate(-40.0f);


        // ViewMatrix definition
        viewMatrix = glm::lookAt(cameraPos, target, up);

        // ProjectionMatrix definition
        // Projektionsmatrix transformiert 3D Koordinaten in 2D auf dem Bildschirm
        // sorgt dafür, dass Obejkte die weiter entfernt sind von der Kamera kleiner erscheinen
        // und Objekte die näher sind größer
        float fov = glm::radians(45.0f); // vertikaler Öffnungswinkler der Kamera
        std::cout << m_window->getWindowWidth() + m_window->getWindowHeight() << std::endl;
        float aspectRatio = static_cast<float>(m_window->getWindowWidth()) / static_cast<float>(m_window->getWindowHeight()); // Breite zu höhe Verhältnis
        float nearPlane = 0.5f; // minimale Entfernung zur Kamera ab welcher Objekte sichbar werden
        float farPlane = 100.0f; // maximale Entfernung zur Kamera bis zu  welcher Objekte sichtbar sind
        projectionMatrix = glm::perspective(fov, aspectRatio, nearPlane, farPlane);

        // Pass matrices to the shader
        m_shader->setUniform("view", viewMatrix, false);
        m_shader->setUniform("projection", projectionMatrix, false);

        // Enable depth test
        glEnable(GL_DEPTH_TEST);
        glDepthFunc(GL_LESS);
        glClearDepth(1.0);


        std::cout << "Scene initialization done\n";
        return true;
    }
    catch (std::exception& ex)
    {
        throw std::logic_error("Scene initialization failed:\n" + std::string(ex.what()) + "\n");
    }
}

void Scene::render(float dt)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    animationTime += dt;
    m_shader->setUniform("animationTime", animationTime);
    robot.draw(vaoID, m_shader);
    robot.animation(dt);

}

void Scene::update(float dt)
{
    float cameraSpeed = 0.05f;
    bool updated = false;


    if (m_window->getInput().getKeyState(Key::W) == KeyState::Pressed) {
        cameraPos += glm::vec3(0.0f, cameraSpeed, 0.0f);
        updated = true;
    }
    if (m_window->getInput().getKeyState(Key::S) == KeyState::Pressed) {
        cameraPos += glm::vec3(0.0f, -cameraSpeed, 0.0f);
        updated = true;
    }
    if (m_window->getInput().getKeyState(Key::A) == KeyState::Pressed) {
        cameraPos += glm::vec3(-cameraSpeed, 0.0f, 0.0f);
        updated = true;
    }
    if (m_window->getInput().getKeyState(Key::D) == KeyState::Pressed) {
        cameraPos += glm::vec3(cameraSpeed, 0.0f, 0.0f);
        updated = true;
    }

    if (updated) {
        viewMatrix = glm::lookAt(cameraPos, target, up);
        m_shader->use();
        m_shader->setUniform("view", viewMatrix, false);
    }
}



OpenGLWindow * Scene::getWindow()
{
    return m_window;
}

void Scene::onKey(Key key, Action action, Modifier modifier)
{
    if (action == Action::Down) {
        keyStatus[key] = true;
    } else if (action == Action::Up) {
        keyStatus[key] = false;
    }
}

void Scene::onMouseMove(MousePosition mouseposition)
{

}

void Scene::onMouseButton(MouseButton button, Action action, Modifier modifier)
{

}

void Scene::onMouseScroll(double xscroll, double yscroll)
{

}

void Scene::onFrameBufferResize(int width, int height)
{

}

void Scene::shutdown()
{

}
