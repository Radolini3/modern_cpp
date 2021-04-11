#pragma once

#include "Shape.hpp"

class Circle final : public Shape
{
public:
    Circle(double r);
    Circle(const Circle & other);

    double getArea() const;
    double getPerimeter() const;
    double getRadius() const;
    void print() const;

private:
    Circle() = default; // doesn't allow to call default constructor

    double r_;
};
