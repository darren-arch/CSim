#include "../include/Object.h"
#include <iostream>

Object::Object(Vector2D pos, Vector2D vel, double mass)
    : position(pos), velocity(vel), acceleration(0, 0), mass(mass) {}

void Object::applyForce(const Vector2D& force) {
    acceleration += force * (1.0 / mass);
}

void Object::update(double dt) {
    velocity += acceleration * dt;
    position += velocity * dt;
    acceleration = Vector2D(0, 0);  // Reset after each frame
}

void Object::printState() const {
    std::cout << "Position: (" << position.x << ", " << position.y << ")  "
              << "Velocity: (" << velocity.x << ", " << velocity.y << ")\n";
}
