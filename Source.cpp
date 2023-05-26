#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    bool allGreaterThanZero = std::all_of(numbers.begin(), numbers.end(), [](int num) {
        return num > 0;
        });
    bool anyEqualToThree = std::any_of(numbers.begin(), numbers.end(), [](int num) {
        return num == 3;
        });
    std::vector<int> copyOfNumbers;
    std::copy(numbers.begin(), numbers.end(), std::back_inserter(copyOfNumbers));


    std::cout << "All elements greater than 0: " << std::boolalpha << allGreaterThanZero << std::endl;
    std::cout << "Any element equal to 3: " << std::boolalpha << anyEqualToThree << std::endl;

    std::cout << "Copy of numbers: ";
    for (const auto& num : copyOfNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}