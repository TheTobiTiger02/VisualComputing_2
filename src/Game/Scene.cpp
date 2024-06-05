#include "Scene.h"
#include <AssetManager.h>

#include "glm/gtx/euler_angles.hpp"

Scene::Scene(OpenGLWindow * window) :
        m_window(window)
{
    assert(window != nullptr);
}

Scene::~Scene()
{}

bool Scene::init()
{
    try
    {
        //Load shader
        m_assets.addShaderProgram("shader", AssetManager::createShaderProgram("assets/shaders/vertex.glsl", "assets/shaders/fragment.glsl"));
        m_shader = m_assets.getShaderProgram("shader");
        m_shader->use();


        // Werte vom Würfel
        static const float vertices[] =  {0.5, -0.5, -0.5, 1, 0, 0,
                                          0.5, -0.5, 0.5, 0, 1, 0,
                                          -0.5, -0.5, 0.5, 0, 0, 1,
                                          -0.5, -0.5, -0.5, 1, 1, 0,
                                          0.5, 0.5, -0.5, 1, 0, 1,
                                          0.5, 0.5, 0.5, 0, 1, 1,
                                          -0.5, 0.5, 0.5, 1, 1, 1,
                                          -0.5, 0.5, -0.5, 0.5, 1, 0.5};

        static const int indices[] = {1, 2, 3,
                                      7, 6, 5,
                                      4, 5, 1,
                                      5, 6, 2,
                                      2, 6, 7,
                                      0, 3, 7,
                                      0, 1, 3,
                                      4, 7, 5,
                                      0, 4, 1,
                                      1, 5, 2,
                                      3, 2, 7,
                                      4, 0, 7};



        //VBO speichert die Positionen von Eckpunkten eines Objekts und auch Farben -> speichert eine Sammlung von Vertexdaten
        // generate and activate VBO and upload data //
        glGenBuffers(1, &vboID);
        glBindBuffer(GL_ARRAY_BUFFER, vboID);
        glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), &vertices, GL_STATIC_DRAW);

        //VAO speichert den Zustand der Vertex-Attribute
        // generate and activate VAO //
        glGenVertexArrays(1, &vaoID);
        glBindVertexArray(vaoID);

        // describe VBO in the VAO //
        glVertexAttribPointer(0, 3, GL_FLOAT, false, 24, 0);
        glEnableVertexAttribArray(0);
        glVertexAttribPointer(1, 3, GL_FLOAT, false, 24, (void*)12);
        glEnableVertexAttribArray(1);

        //Speichert eine Liste von Indicies
        GLuint iboID;
        glGenBuffers(1, &iboID); //only works after glGenVertexArrays();
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, iboID);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);


        // Aufgabe 4
        glEnable(GL_CULL_FACE);
        glFrontFace(GL_CCW);
        glCullFace(GL_BACK);


        glEnable(GL_DEPTH_TEST);
        glDepthFunc(GL_GREATER);
        glClearDepth(0.0);

        robot.initRobot();
        robot.rotate(-40.0f);

        std::cout << "Scene initialization done\n";
        return true;
    }
    catch (std::exception& ex)
    {
        throw std::logic_error("Scene initialization failed:\n" + std::string(ex.what()) + "\n");
    }
}

void Scene::render(float dt)
{;

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    robot.draw(vaoID, m_shader);
    robot.animation(dt);


}

void Scene::update(float dt)
{

}

OpenGLWindow * Scene::getWindow()
{
    return m_window;
}

void Scene::onKey(Key key, Action action, Modifier modifier)
{

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
