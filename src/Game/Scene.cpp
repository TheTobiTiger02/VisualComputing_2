#include "Scene.h"
#include <AssetManager.h>

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

        // House
        /*float vertices[] = {-0.5, -0.5, 0.0, 0.0, 1.0,
                            0.5, -0.5, 0.0, 0.0, 1.0,
                            0.5, 0.5, 0.0, 1.0, 0.0,
                            0.0, 1.0, 1.0, 0.0, 0.0,
                            -0.5, 0.5, 0.0, 1.0, 0.0};

        int indices[] = {0, 1, 2,
                         0, 2, 4,
                         4, 2, 3};
        */

        // Initials
        // T
        float vertices[] = {-0.7, 0.0, 0.0, 0.0, 1.0,
                            -0.7, 0.6, 0.0, 0.0, 1.0,
                            -0.9, 0.6, 0.0, 1.0, 1.0,
                            -0.9, 0.7, 0.0, 0.0, 1.0,
                            -0.7, 0.7, 0.0, 0.0, 1.0,
                            -0.5, 0.7, 0.0, 0.0, 1.0,
                            -0.3, 0.7, 0.0, 1.0, 1.0,
                            -0.3, 0.6, 0.0, 1.0, 1.0,
                            -0.5, 0.6, 0.0, 1.0, 1.0,
                            -0.5, 0.0, 0.0, 1.0, 1.0,
                // H
                            0.0, 0.0, 0.0, 0.0, 1.0,
                            0.0, 0.7, 0.0, 0.0, 1.0,
                            0.2, 0.7, 0.0, 0.0, 1.0,
                            0.2, 0.0, 0.0, 0.0, 1.0,
                            0.2, 0.25, 0.0, 0.0, 1.0,
                            0.2, 0.45, 0.0, 0.0, 1.0,
                            0.4, 0.45, 0.0, 0.0, 1.0,
                            0.4, 0.25, 0.0, 0.0, 1.0,
                            0.4, 0.0, 0.0, 0.0, 1.0,
                            0.4, 0.7, 0.0, 0.0, 1.0,
                            0.6, 0.7, 0.0, 0.0, 1.0,
                            0.6, 0.0, 0.0, 0.0, 1.0};


        // Clockwise
                        // T
        int indices[] = {0, 1, 8,
                         0, 8, 9,
                         1, 2, 3,
                         1, 3, 4,
                         5, 7, 8,
                         5, 6, 7,
                         1, 5, 8,
                         1, 4, 5,
                         // H
                         10, 11, 12,
                         10, 12, 13,
                         14, 15, 16,
                         14, 16, 17,
                         18, 19, 20,
                         18, 20, 21,
        };


        // Counter clockwise
        /*
        int indices[] = {
                // T
                0, 8, 1,
                0, 9, 8,
                1, 3, 2,
                1, 4, 3,
                5, 8, 7,
                5, 7, 6,
                1, 8, 5,
                1, 5, 4,
                // H
                10, 12, 11,
                10, 13, 12,
                14, 16, 15,
                14, 17, 16,
                18, 20, 19,
                18, 21, 20,
        };
         */






        glGenVertexArrays(1, &vaoID);
        glBindVertexArray(vaoID);

        // Create VBO
        glGenBuffers(1, &vboID);
        glBindBuffer(GL_ARRAY_BUFFER, vboID);
        glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

        // Create EBO
        GLuint iboID;
        glGenBuffers(1, &iboID);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, iboID);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

        // Set up vertex attribute pointers
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3 * sizeof(float)));
        glEnableVertexAttribArray(1);

        /*glEnable(GL_CULL_FACE);
        glFrontFace(GL_CCW);
        glCullFace(GL_BACK);
        */

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

    /*
    * ************
    * Place your code here!
    * ************
    */
    // Use the shader program
    m_shader->use();

    // Render the object
    glBindVertexArray(vaoID);
    glDrawElements(GL_TRIANGLES, 42, GL_UNSIGNED_INT, nullptr);


    // Render code





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