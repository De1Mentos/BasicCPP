#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

template <typename T>
T** Initialize(uint32_t col, uint32_t row)
{
    T** arr = new T * [col];
    for (size_t i = 0; i < col; i++)
    {
        arr[i] = new T[row];
        for (size_t j = 0; j < row; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    return arr;
}

template <typename T>
void FirstZadacha(T** arr_A, uint32_t colA, uint32_t rowA, T** arr_B, uint32_t colB, uint32_t rowB, T** arr_C, uint32_t colC, uint32_t rowC, uint32_t G)
{

}


uint64_t global_id = 0;
struct car
{
private:
    uint64_t id;
    bool is_empty_entity = true;
    string length;
    string clearance;
    string enginevolume;
    string power;
    string wheeldiameter;
    string color;
    string gearboxtype;
public:
    void InputC()
    {
        id = global_id;
        global_id++;
        cout << "Input length: "; cin >> length;
        cout << "Input clearance: "; cin >> clearance;
        cout << "Input engine volume: "; cin >> enginevolume;
        cout << "Input power: "; cin >> power;
        cout << "Input wheel diameter: "; cin >> wheeldiameter;
        cout << "Input color: "; cin >> color;
        cout << "Input gearbox type: "; cin >> gearboxtype;
        is_empty_entity = false;
    }
    void OutputC()
    {
        if (is_empty_entity == false)
        {
            cout << "Id: " << id << endl;
            cout << "length: " << length << endl;
            cout << "clearance: " << clearance << endl;
            cout << "engine volume: " << enginevolume << endl;
            cout << "Input power: " << power << endl;
            cout << "wheel diameter: " << wheeldiameter << endl;
            cout << "color: " << color << endl;
            cout << "gearbox type: " << gearboxtype << endl;
        }
        else
        {
            cout << "Empty pupil!" << endl;
        }
    }
};
struct pupil
{
private:
    uint64_t id;
    bool is_empty_entity = true;
    string Name;
    string SN;
public:
    void Input()
    {
        id = global_id;
        global_id++;
        cout << "Input name: "; cin >> Name;
        cout << "Input second name: "; cin >> SN;
        is_empty_entity = false;
    }
    void Output()
    {
        if (is_empty_entity == false)
        {
            cout << "Id: " << id << endl;
            cout << Name << " " << SN;
        }
        else
        {
            cout << "Empty pupil!" << endl;
        }
    }
};
int main()
{
    int Zadacha;

    cout << "\t\t#------------------#" << endl;
    cout << "\t\t|     THE MENU     |" << endl;
    cout << "\t\t#------------------#" << endl;
    cout << "\t\t| 1= ZADACHA 1     |" << endl;
    cout << "\t\t| 2= ZADACHA 2     |" << endl;
    cout << "\t\t| 3= ZADACHA 3     |" << endl;
    cout << "\t\t| 4= ZADACHA 4     |" << endl;
    cout << "\t\t#------------------#" << endl;
    cout << "\t\t| 0= CLOSE         |" << endl;
    cout << "\t\t#------------------#" << endl;
    cout << "" << endl;
    cout << "Write what zadacha to show -->";
    cin >> Zadacha;
    system("cls");
    switch (Zadacha)
    {
    case 1:
    {
        pupil* pupils = new pupil[5];
        for (size_t i = 0; i < 5; i++)
        {
            cout << "Pupil Number #" << i << endl;
            pupils[i].Input();
            cout << endl;
        }
        system("pause");
        system("cls");
        for (size_t i = 0; i < 5; i++)
        {
            cout << "Object instance #" << i << endl;
            pupils[i].Output();
            cout << endl;
        }
        return 0;
    }break;
    case 2:
    {
        srand(time(0));
        uint32_t colA, rowA, colB, rowB, colC, rowC, G=0;
        cout << "Input col A: ";
        cin >> colA;
        cout << "Input row A: ";
        cin >> rowA;
        cout << "Input col B: ";
        cin >> colB;
        cout << "Input row B: ";
        cin >> rowB;
        cout << "Input col C: ";
        cin >> colC;
        cout << "Input row C: ";
        cin >> rowC;
        int** arr_1 = Initialize<int>(colA, rowA);
        int** arr_2 = Initialize<int>(colB, rowB);
        int** arr_3 = Initialize<int>(colC, rowC);
        FirstZadacha(arr_1, colA, rowA, arr_2, colB, rowB, arr_3, colC, rowC, G);
        cout << "Couldn't find any online sources for making this case";
        return 0;
    }break;
    case 3:
    {

    }break;
    case 4:
    {
        car* cars = new car[5];
        for (size_t i = 0; i < 5; i++)
        {
            cout << "Car Number #" << i << endl;
            cars[i].InputC();
            cout << endl;
        }
        system("pause");
        system("cls");
        for (size_t i = 0; i < 5; i++)
        {
            cout << "Object instance #" << i << endl;
            cars[i].OutputC();
            cout << endl;
        }
        return 0;
    }break;
    }
}
