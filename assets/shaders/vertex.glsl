#version 330 core

layout (location = 0) in vec3 pos;       // Eingabepositionsattribute
layout (location = 1) in vec3 colorRGB;  // Eingabefarbattribute

out vec3 colorVS;                        // Ausgabevariable für den Fragment-Shader
uniform mat4 model;                      // Modellmatrix
uniform mat4 view;                       // Viewmatrix
uniform mat4 projection;                 // Projektionsmatrix

void main() {
    colorVS = colorRGB;  // Farbe an den Fragment-Shader weitergeben
    gl_Position = model * vec4(pos, 1.0) * view * projection;  // Vertex-Position transformieren
}
