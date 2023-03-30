#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Reservoir {
public:

    string name;
    int width;
    int lenght;
    int depth;
    string type;

    explicit Reservoir(string _name, int _width, int _lenght, int _depth, string _type) {
        name = _name;

        width = _width;
        lenght = _lenght;
        depth = _depth;

        type = _type;
    }

    inline void Capacity() {
        cout << "Capacity " << width * lenght * depth;
    }

    inline void Area() {
        cout << "Area " << width * lenght;
    }

    inline void Type() {
        cout << "Type of reservoir " << type;
    }

};

int main()
{
        Reservoir reservoirOne("RICHKA", 555, 14, 54, "River");
        reservoirOne.Capacity();

}