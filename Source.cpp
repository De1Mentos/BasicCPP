#include <iostream>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))
#define IS_EVEN(x) ((x) % 2 == 0)
#define IS_ODD(x) ((x) % 2 == 1)

int main() {
    int a = 5;
    int b = 7;

    int min_num = MIN(a, b);
    std::cout << "Min: " << min_num << std::endl;

    int max_num = MAX(a, b);
    std::cout << "Max: " << max_num << std::endl;

    int square_num = SQUARE(a);
    std::cout << "Square: " << square_num << std::endl;

    if (IS_EVEN(a)) {
        std::cout << a << " is even" << std::endl;
    }
    else {
        std::cout << a << " is odd" << std::endl;
    }

    if (IS_ODD(b)) {
        std::cout << b << " is odd" << std::endl;
    }
    else {
        std::cout << b << " is even" << std::endl;
    }

    return 0;
}