#ifndef ROBOT_H
#define ROBOT_H
#include "Transform.h"
#include "ShaderProgram.h"


class Robot {
public:
    Robot() = default;
    Transform root, head, body, leftLeg, rightLeg, leftUpperArm, leftUnderArm, rightUpperArm, rightUnderArm;
    void initRobot();
    void draw(GLuint VAOID, ShaderProgram* shader);
    void rotate(float angle);
    void animation(float time);

private:
    float calculateTime = 0.0f;

    void swingLeg(float, bool);
    void swingArm(float, bool);
};



#endif //ROBOT_H
