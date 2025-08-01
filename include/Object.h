#ifndef OBJECT_H
#define OBJECT_H

#include "Vector2D.h"

class Object {
public:
    Object(Vector2D position, Vector2D velocity, double mass);

    void applyForce(const Vector2D& force);
    void update(double dt);  // time step

    void printState() const;

private:
    Vector2D position;
    Vector2D velocity;
    Vector2D acceleration;
    double mass;
};

#endif
