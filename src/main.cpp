#include "../include/Object.h"
#include <iostream>
#include <chrono>
#include <thread>

int main() {
    Object ball({0, 0}, {5, 10}, 1.0);
    Vector2D gravity(0, -9.81);

    double dt = 0.016;  // ~60 FPS
    for (int i = 0; i < 200; ++i) {
        ball.applyForce(gravity);
        ball.update(dt);
        ball.printState();
        std::this_thread::sleep_for(std::chrono::milliseconds(16));
    }

    return 0;
}
