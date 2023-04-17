#include <iostream>
#include <cmath>

const double M_PI = std::acos(-1);

class Shape {
public:
    virtual double getArea() const = 0;
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double getArea() const override {
        return side * side;
    }

    double getDiagonal() const {
        return std::sqrt(2) * side;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea() const override {
        return M_PI * radius * radius;
    }

    double getCircumference() const {
        return 2 * M_PI * radius;
    }
};

class InscribedCircle : public Circle {
public:
    InscribedCircle(double s) : Circle(s / 2) {}
};

class CircleInSquare : public Square, public InscribedCircle {
public:
    CircleInSquare(double s) : Square(s), InscribedCircle(s) {}

    double getArea() const {
        return Shape::getArea();
    }
};

int main() {
    CircleInSquare c(4.0);
    std::cout << "Area of the circle inscribed in the square: " << c.getArea() << std::endl;
    std::cout << "Diagonal of the square: " << c.getDiagonal() << std::endl;
    std::cout << "Circumference of the circle: " << c.getCircumference() << std::endl;
    return 0;
}