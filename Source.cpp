#include <iostream>
#include <string>
#include <string.h>
using namespace std;
struct name
{
public:
    string name;
    void Output()
    {
        cout << "Full Creation Name: " << name << endl;
    }
    void Input()
    {
        cout << "Full Creation Name: ";
        getline(cin, name);
    }
};
struct date_of_creation
{
private:
    short CheckDate(short end_value, string text)
    {
        short value;
        do
        {
            cout << "Input " << text << "->";
            cin >> value;
            if (value < 0 || value>end_value)
            {
                cout << "Erorr! Inccorect value!" << endl;
            }
            else
            {
                break;
            }
        } while (true);
        return value;
    }
public:
    short d;
    short m;
    short y;
    string full_m;
    void Output()
    {
        cout << "Date of creation: " << d << "." << m <<" ("<< full_m <<")" << "." << y << endl;
    }
    void Input()
    {
        d = CheckDate(31, "day");
        m = CheckDate(12, "month");
        y = CheckDate(2022, "year");
        switch (m)
        {
        case 1: {full_m = "January"; }break;
        case 2: {full_m = "February";}break;
        case 3: {full_m = "March";}break;
        case 4: {full_m = "April";}break;
        case 5: {full_m = "Mai";}break;
        case 6: {full_m = "June";}break;
        case 7: {full_m = "July";}break;
        case 8: {full_m = "August";}break;
        case 9: {full_m = "September";}break;
        case 10: {full_m = "October";}break;
        case 11: {full_m = "November";}break;
        case 12: {full_m = "December";}break;
        }
    }
};

struct stats
{
private:
    string memory;
    string maxres;
    string videomem;
    string RAM;
    string proc;

public:
    void Output()
    {
        cout << "Memory: " << memory << endl;
        cout << "Videomemory: " << videomem << endl;
        cout << "RAM: " << RAM << endl;
        cout << "Proccesor: " << proc << endl;
    }
    void Input()
    {
        cin.ignore();
        cout << "Memory: ";
        getline(cin, memory);
        cout << "Videomemory: ";
        getline(cin, videomem);
        cout << "RAM: ";
        getline(cin, RAM);
        cout << "Proccesor: ";
        getline(cin, proc);
    }
};
struct style
{
private:
    string color;
    string dimensions;

public:
    void Output()
    {
        cout << "Memory: " << color << endl;
        cout << "Videomemory: " << dimensions << endl;
    }
    void Input()
    {
        cin.ignore();
        cout << "Color: ";
        getline(cin, color);
        cout << "Dimensions: ";
        getline(cin, dimensions);
    }
};
struct adress
{
private:
    string county; //Ïîì³íÿéòû//
    string factrory;
public:
    void Output()
    {
        cout << "Ñounty of creation: " << county << endl;
        cout << "Made on this factory: " << factrory << endl;
    }
    void Input()
    {
        cin.ignore();
        cout << "County where PS5 was made: ";
        getline(cin, county);
        cout << "Factory where PS5 was made: ";
        getline(cin, factrory);
    }
};
struct PS5
{
private:
    name fullname_;
    uint32_t age;
    date_of_creation date_of_birthday_;
    adress adress_;
    stats stats_;
    style style_;
public:
    void Output()
    {
        fullname_.Output();
        date_of_birthday_.Output();
        adress_.Output();
        stats_.Output();
    }
    void Input()
    {
        fullname_.Input();
        //cin.ignore();//
        date_of_birthday_.Input();
        adress_.Input();
        stats_.Input();
        style_.Input();
    }
};
int main()
{
    PS5* ps5 = new PS5;
    ps5->Input();
    system("cls");
    ps5->Output();
    return 0;
}