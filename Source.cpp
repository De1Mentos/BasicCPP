#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class var 
{
public:
    enum Type { INT, DOUBLE, STRING };

    var(int value) 
    {
        m_type = INT;
        m_intValue = value;
    }

    Type m_type;
    int m_intValue;
    double m_doubleValue;
    string m_stringValue;

    var(double value) 
    {
        m_type = DOUBLE;
        m_doubleValue = value;
    }

    var(string value) 
    {
        m_type = STRING;
        m_stringValue = value;
    }

    Type getType() 
    {
        return m_type;
    }

    int getIntValue() 
    {
        if (m_type != INT) {
            throw runtime_error("WARNING - ERROR");
        }
        return m_intValue;
    }

    double getDoubleValue() 
    {
        if (m_type != DOUBLE) 
        {
            throw runtime_error("WARNING - ERROR");
        }
        return m_doubleValue;
    }

    string getStringValue() 
    {
        if (m_type != STRING) 
        {
            throw runtime_error("Cannot get string value of non-string var");
        }
        return m_stringValue;
    }

};

int main()
{
        var x(69);
        var y(6.66);
        var z("Cheeseburger");

        cout << "x " << x.getIntValue() << endl;
        cout << "y: " << y.getDoubleValue() << endl;
        cout << "z: " << z.getStringValue() << endl;

        return 0;
}