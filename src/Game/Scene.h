#pragma once

#include "OpenGLWindow.h"
#include <ShaderProgram.h>
#include <memory>
#include <AssetManager.h>
#include "Robot.h"
#include "Cube.h"

class Scene
{
public:
    Scene(OpenGLWindow* window);
    ~Scene();

    bool init();
    void shutdown();
    void render(float dt);
    void update(float dt);
    OpenGLWindow* getWindow();

    void onKey(Key key, Action action, Modifier modifier);
    void onMouseMove(MousePosition mouseposition);
    void onMouseButton(MouseButton button, Action action, Modifier modifier);
    void onMouseScroll(double xscroll, double yscroll);
    void onFrameBufferResize(int width, int height);

private:
    OpenGLWindow* m_window;
    AssetManager m_assets;
    ShaderProgram* m_shader;
    GLuint vaoID, vboID;
    Robot robot;
    float animationTime = 0.0f;
    glm::vec3 cameraPos;
    glm::vec3 target;
    glm::vec3 up;
    glm::mat4 viewMatrix, projectionMatrix;
    std::unordered_map<Key, bool> keyStatus;
};

