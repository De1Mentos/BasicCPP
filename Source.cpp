#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

int mystrcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

int StringToNumber(char* str) {
    return std::atoi(str);
}

char* NumberToString(int number) {
    int length = snprintf(nullptr, 0, "%d", number);
    char* str = new char[length + 1];
    snprintf(str, length + 1, "%d", number);
    return str;
}

char* Uppercase(char* str) {
    char* ptr = str;
    while (*ptr) {
        *ptr = std::toupper(*ptr);
        ptr++;
    }
    return str;
}

char* Lowercase(char* str) {
    char* ptr = str;
    while (*ptr) {
        *ptr = std::tolower(*ptr);
        ptr++;
    }
    return str;
}

char* mystrrev(char* str) {
    if (str) {
        char* start = str;
        char* end = start + strlen(str) - 1;
        while (start < end) {
            std::swap(*start, *end);
            start++;
            end--;
        }
    }
    return str;
}

int main() {
    // Пример использования функций
    const char* str1 = "Jesus";
    const char* str2 = "Crust";
    int cmpResult = mystrcmp(str1, str2);
    std::cout << "Comparison result: " << cmpResult << std::endl;

    char numberStr[] = "12345";
    int number = StringToNumber(numberStr);
    std::cout << "Converted number: " << number << std::endl;

    int num = 6789;
    char* str = NumberToString(num);
    std::cout << "Converted string: " << str << std::endl;
    delete[] str;

    char str3[] = "Jesus Crust";
    char* upperStr = Uppercase(str3);
    std::cout << "Uppercase string: " << upperStr << std::endl;

    char str4[] = "JESUS CRUST";
    char* lowerStr = Lowercase(str4);
    std::cout << "Lowercase string: " << lowerStr << std::endl;

    char str5[] = "Reverse";
    char* reversedStr = mystrrev(str5);
    std::cout << "Reversed string: " << reversedStr << std::endl;

    return 0;
}