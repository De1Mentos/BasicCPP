#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Drib 
{
public:
    int a;
    int b;

    Drib(int _a, int _b) 
    {
        a = _a;
        b = _b;
    }

    inline void Plus() {
        cout << a + b << endl;
    }

    inline void Minus() {
        cout << a - b << endl;
    }

    inline void Mnojena() {
        cout << a * b << endl;
    }

    inline void Divide() {
        cout << a / b << endl;
    }

};

int main()
{
    Drib number(12, 2);
    number.Plus();
    number.Minus();
    number.Divide();
    number.Mnojena();
}