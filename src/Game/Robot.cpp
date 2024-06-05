#include "Robot.h"

void Robot::initRobot()
{
    head.setScale(glm::vec3(0.4, 0.4, 0.3));
    head.setPosition(glm::vec3(0, 0.75, 0));

    body.setScale(glm::vec3(0.6, 0.6, 0.2));
    body.setPosition(glm::vec3(0, 0.2, 0));

    leftUpperArm.setScale(glm::vec3(0.1, 0.2, 0.1));
    leftUpperArm.setPosition(glm::vec3(-0.4, 0.3, 0));
    leftUnderArm.setScale(glm::vec3(0.1, 0.2, 0.1));
    leftUnderArm.setPosition(glm::vec3(-0.4, 0.0, 0));

    rightUpperArm.setScale(glm::vec3(0.1, 0.2, 0.1));
    rightUpperArm.setPosition(glm::vec3(0.4, 0.3, 0));
    rightUnderArm.setScale(glm::vec3(0.1, 0.2, 0.1));
    rightUnderArm.setPosition(glm::vec3(0.4, 0.0, 0));

    leftLeg.setScale(glm::vec3(0.1, 0.4, 0.1));
    leftLeg.setPosition(glm::vec3(-0.1, -0.4, 0));

    rightLeg.setScale(glm::vec3(0.1, 0.4, 0.1));
    rightLeg.setPosition(glm::vec3(0.1, -0.4, 0));
}

void Robot::draw(GLuint VAOID, ShaderProgram* shader)
{
    glBindVertexArray(VAOID);
    shader->use();
    glm::mat4 transformHead = root.getMatrix() * head.getMatrix();
    shader->setUniform("model", transformHead, false);
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
    glm::vec3 axis = glm::vec3(0.0 , 1.0 , 0.0);
    glm::quat rotate = glm::angleAxis(glm::radians(angle), axis);
    root.setRotation(root.getRotation() * rotate);
}

void Robot::animation(float time)
{
    calculateTime += time;
    float angle = cos(calculateTime) * 45.0f;

    swingLeg(-glm::radians(angle ), true);
    swingLeg(glm::radians(angle ), false);
    swingArm(glm::radians(angle ), true);
    swingArm(-glm::radians(angle ), false);
}

void Robot::swingLeg(float angle, bool isLeft) {
    Transform &leg = isLeft ? leftLeg : rightLeg;
    glm::vec3 hipPos = body.getPosition() + glm::vec3(isLeft ? -0.1f : 0.1f, -0.5f, 0);
    glm::quat rotation = glm::angleAxis(glm::radians(angle / 2), glm::vec3(1, 0, 0));

    leg.rotateAroundPoint(hipPos, rotation);
}

void Robot::swingArm(float angle, bool isLeft) {
    Transform& upperArm = isLeft ? leftUpperArm : rightUpperArm;
    Transform& underArm = isLeft ? leftUnderArm : rightUnderArm;

    glm::vec3 shoulderPos = body.getPosition() + glm::vec3(isLeft ? -0.4f : 0.4f, 0.4f, 0);
    glm::quat rotationUpper = glm::angleAxis(glm::radians(angle), glm::vec3(1, 0, 0));
    upperArm.rotateAroundPoint(shoulderPos, rotationUpper);
    underArm.rotateAroundPoint(shoulderPos, rotationUpper);

    glm::vec3 elbowPos = upperArm.getPosition() + glm::vec3(0, -0.3, 0);
    glm::quat rotationLower = glm::angleAxis(glm::radians(angle / 2), glm::vec3(1, 0, 0)); // Change this line
    underArm.rotateAroundPoint(elbowPos, rotationLower);
}
