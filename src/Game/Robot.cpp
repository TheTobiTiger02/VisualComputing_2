#include "Robot.h"

void Robot::initRobot()
{
    head.setScale(glm::vec3(0.2, 0.2, 0.2));
    head.setPosition(glm::vec3(0, 0.75, 0));

    body.setScale(glm::vec3(0.5, 0.75, 0.4));
    body.setPosition(glm::vec3(0, 0.2, 0));

    leftUpperArm.setScale(glm::vec3(0.1, 0.3, 0.1));
    leftUpperArm.setPosition(glm::vec3(-0.4, 0.4, 0));
    leftUnderArm.setScale(glm::vec3(0.1, 0.3, 0.1));
    leftUnderArm.setPosition(glm::vec3(-0.4, 0.05, 0));

    rightUpperArm.setScale(glm::vec3(0.1, 0.3, 0.1));
    rightUpperArm.setPosition(glm::vec3(0.4, 0.4, 0));
    rightUnderArm.setScale(glm::vec3(0.1, 0.3, 0.1));
    rightUnderArm.setPosition(glm::vec3(0.4, 0.05, 0));

    leftLeg.setScale(glm::vec3(0.1, 0.5, 0.1));
    leftLeg.setPosition(glm::vec3(-0.1, -0.5, 0));

    rightLeg.setScale(glm::vec3(0.1, 0.5, 0.1));
    rightLeg.setPosition(glm::vec3(0.1, -0.5, 0));
}

void Robot::draw(GLuint VAOID, ShaderProgram* shader)
{
    glBindVertexArray(VAOID);
    shader->use();  // aktiviert Shaderprogramm
    glm::mat4 transformHead = root.getMatrix() * head.getMatrix(); // transformations-Matrix berechnen
    shader->setUniform("model", transformHead, false); // Model im Raum platzieren
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);

    glm::mat4 transformBody = root.getMatrix() * body.getMatrix();
    shader->setUniform("model", transformBody, false);
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);

    glm::mat4 transformRightLeg = root.getMatrix() * rightLeg.getMatrix();
    shader->setUniform("model", transformRightLeg, false);
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);

    glm::mat4 transformLeftLeg = root.getMatrix() * leftLeg.getMatrix();
    shader->setUniform("model", transformLeftLeg, false);
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);

    glm::mat4 transformRightUpperArm = root.getMatrix() * rightUpperArm.getMatrix();
    shader->setUniform("model", transformRightUpperArm, false);
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);

    glm::mat4 transformRightUnderArm = root.getMatrix() * rightUnderArm.getMatrix();
    shader->setUniform("model", transformRightUnderArm, false);
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);

    glm::mat4 transformLeftUpperArm = root.getMatrix() * leftUpperArm.getMatrix();
    shader->setUniform("model", transformLeftUpperArm, false);
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);

    glm::mat4 transformLeftUnderArm = root.getMatrix() * leftUnderArm.getMatrix();
    shader->setUniform("model", transformLeftUnderArm, false);
    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);

    glBindVertexArray(0);
}

void Robot::rotate(float angle)
{
    glm::vec3 axis = glm::vec3(0.0 , 1.0 , 0.0); // Achse definieren für die rotation
    glm::quat rotate = glm::angleAxis(glm::radians(angle), axis); // Quaternionenrotation um die angeg. Achse um angle -> radians konvertiert Winkel in Bogenmaß um
    root.setRotation(root.getRotation() * rotate); // Roboter wird um die angegebene Achse & den berechneten Winkel (rotate) rotiert
    root.translate(glm::vec3(0.0f, 0.0f, -6.0f));
}

void Robot::animation(float time)
{
    calculateTime += 0.01f; // Variable im laufe der Zeit zu steuern
    float angle = cos(calculateTime) * 45.0f; // Winkel berechnen um den bewegt werden soll

    swingLeg(-glm::radians(angle / 2), true); // zuerst linkes Bein nach hinten schwingen
    swingLeg(glm::radians(angle / 2), false); // dann rechtes Bein nach vorne
    swingArm(glm::radians(angle), true); // linkes Bein nach vorne
    swingArm(-glm::radians(angle), false); // rechtes Bein nach hinten
}

void Robot::swingLeg(float angle, bool isLeft) {
    Transform& leg = isLeft ? leftLeg : rightLeg; // referenz auf das Bein was transformiert werden soll -> isLeft true = linkes Bein sonst rechtes
    glm::vec3 hipPos = body.getPosition() + glm::vec3(isLeft ? -0.1f : 0.1f, -0.5f, 0); // Position der Hüfte berechnen basierend auf rechtes oder linkes Bein
    glm::quat rotation = glm::angleAxis(glm::radians(angle), glm::vec3(1, 0, 0)); // Quarternion-Rotation um die x-Achse

    leg.rotateAroundPoint(hipPos, rotation); // Bein wird rotiert
}

void Robot::swingArm(float angle, bool isLeft) {
    Transform& upperArm = isLeft ? leftUpperArm : rightUpperArm; // bestimmen ob rechter oder linker Arm
    Transform& underArm = isLeft ? leftUnderArm : rightUnderArm;

    glm::vec3 shoulderPos = body.getPosition() + glm::vec3(isLeft ? -0.4f : 0.4f, 0.4f, 0); // Schulter-Position berechnen
    glm::quat rotationUpper = glm::angleAxis(glm::radians(angle), glm::vec3(1, 0, 0)); // Rotation um die x-Achse
    upperArm.rotateAroundPoint(shoulderPos, rotationUpper);
    underArm.rotateAroundPoint(shoulderPos, rotationUpper);

    glm::vec3 elbowPos = upperArm.getPosition() + glm::vec3(0, -0.3, 0); // Ellenbogen-Position berechnen
    glm::quat rotationLower = glm::angleAxis(glm::radians(angle / 2), glm::vec3(1, 0, 0)); // Rotation um die x-Achse
    underArm.rotateAroundPoint(elbowPos, rotationLower);
}
