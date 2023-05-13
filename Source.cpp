#include <iostream>
#include <cmath>

class Circle {
private:
public:
    double radius;

    Circle(double r) : radius(r) {}

    bool operator==(const Circle& other) const {
        return this->radius == other.radius;
    }

    bool operator>(const Circle& other) const {
        return 2 * acos(-1) * this->radius > 2 * acos(-1) * other.radius;
    }

    Circle& operator+=(double r) {
        this->radius += r;
        return *this;
    }

    Circle& operator-=(double r) {
        this->radius -= r;
        return *this;
    }
};

int main() {
    Circle c1(3);
    Circle c2(4);
    Circle c3(3);

    std::cout << std::boolalpha;

    std::cout << (c1 == c2) << std::endl; // false
    std::cout << (c1 == c3) << std::endl; // true

    std::cout << (c2 > c1) << std::endl; // true
    std::cout << (c1 > c2) << std::endl; // false

    c1 += 2;
    std::cout << c1.radius << std::endl; // 5

    c2 -= 1;
    std::cout << c2.radius << std::endl; // 3
}