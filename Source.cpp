#include <iostream>

namespace Calculator {
    double add(double x, double y) {
        return x + y;
    }

    double subtract(double x, double y) {
        return x - y;
    }

    double multiply(double x, double y) {
        return x * y;
    }

    double divide(double x, double y) {
        if (y == 0) {
            std::cerr << "Error: division by zero\n";
            return 0;
        }
        return x / y;
    }
}

int main() {
    double x, y;
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;

    std::cout << "Sum: " << Calculator::add(x, y) << '\n';
    std::cout << "Difference: " << Calculator::subtract(x, y) << '\n';
    std::cout << "Product: " << Calculator::multiply(x, y) << '\n';
    std::cout << "Quotient: " << Calculator::divide(x, y) << '\n';

    return 0;
}