#ifndef VECTOR2D_H
#define VECTOR2D_H

struct Vector2D {
    double x, y;

    Vector2D(double x = 0, double y = 0);
    Vector2D operator+(const Vector2D& other) const;
    Vector2D operator-(const Vector2D& other) const;
    Vector2D operator*(double scalar) const;
    Vector2D& operator+=(const Vector2D& other);
};

#endif
