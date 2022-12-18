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
struct washing
{
private:
    uint64_t id;
    bool is_empty_entity = true;
    string firm;
    string color;
    string width;
    string length;
    string height;
    string power;
    string spinspeed;
    string heatingtemperature;
public:
    void InputW()
    {
        id = global_id;
        global_id++;
        cout << "Input firm: "; cin >> firm;
        cout << "Input color: "; cin >> color;
        cout << "Input width: "; cin >> width;
        cout << "Input length: "; cin >> length;
        cout << "Input height: "; cin >> height;
        cout << "Input power: "; cin >> power;
        cout << "Input spin speed: "; cin >> spinspeed;
        cout << "Input heating temperature: "; cin >> heatingtemperature;
        is_empty_entity = false;
    }
    void OutputW()
    {
        if (is_empty_entity == false)
        {
            cout << "Id: " << id << endl;
            cout << "firm: " << firm << endl;
            cout << "color: " << color << endl;
            cout << "width: " << width << endl;
            cout << "length: " << length << endl;
            cout << "height: " << height << endl;
            cout << "power: " << power << endl;
            cout << "spin speed: " << spinspeed << endl;
            cout << "heating temperature: " << heatingtemperature << endl;
        }
        else
        {
            cout << "Empty Washingmachine!" << endl;
        }
    }
};
struct boiler
{
private:
    uint64_t id;
    bool is_empty_entity = true;
    string firm;
    string power;
    string volume;
    string heatingtemperature;
    string color;
public:
    void InputB()
    {
        id = global_id;
        global_id++;
        cout << "Input firm: "; cin >> firm;
        cout << "Input power: "; cin >> power;
        cout << "Input volume: "; cin >> volume;
        cout << "Input heating temperature: "; cin >> heatingtemperature;
        cout << "Input color: "; cin >> color;
        is_empty_entity = false;
    }
    void OutputB()
    {
        if (is_empty_entity == false)
        {
            cout << "Id: " << id << endl;
            cout << "firm: " << firm << endl;
            cout << "power: " << power << endl;
            cout << "engine volume: " << volume << endl;
            cout << "heating temperature: " << heatingtemperature << endl;
            cout << "color: " << color << endl;
        }
        else
        {
            cout << "Empty boiler!" << endl;
        }
    }
};
struct iron
{
private:
    uint64_t id;
    bool is_empty_entity = true;
    string firm;
    string model;
    string minimumtemperature;
    string power;
    string maximumtemperature;
    string color;
    string steam;
    string supply;
public:
    void InputI()
    {
        id = global_id;
        global_id++;
        cout << "Input firm: "; cin >> firm;
        cout << "Input model: "; cin >> model;
        cout << "Input minimum temperature: "; cin >> minimumtemperature;
        cout << "Input power: "; cin >> power;
        cout << "Input maximum temperature: "; cin >> maximumtemperature;
        cout << "Input color: "; cin >> color;
        cout << "Input steam: "; cin >> steam;
        cout << "Input supply (yes/no): "; cin >> steam;
        is_empty_entity = false;
    }
    void OutputI()
    {
        if (is_empty_entity == false)
        {
            cout << "Id: " << id << endl;
            cout << "firm: " << firm << endl;
            cout << "model: " << model << endl;
            cout << "minimum temperature: " << minimumtemperature << endl;
            cout << "Input power: " << power << endl;
            cout << "wheel maximum temperature: " << maximumtemperature << endl;
            cout << "color: " << color << endl;
            cout << "steam: " << steam << endl;
            cout << "supply: " << steam << endl;
        }
        else
        {
            cout << "Empty Iron!" << endl;
        }
    }
};
struct pet
{
private:
    uint64_t id;
    bool is_empty_entity = true;
    string name;
    string animal;
    string surname;
    string sound;
public:
    void InputP()
    {
        id = global_id;
        global_id++;
        cout << "Input name: "; cin >> name;
        cout << "Input animal: "; cin >> animal;
        cout << "Input surname: "; cin >> surname;
        cout << "Input how does this animal sound: "; cin >> sound;
        is_empty_entity = false;
    }
    void OutputP()
    {
        if (is_empty_entity == false)
        {
            cout << "Id: " << id << endl;
            cout << "name: " << name << endl;
            cout << "animal: " << animal << endl;
            cout << "surname: " << surname << endl;
            cout << "This animal goes: " << sound << endl;
        }
        else
        {
            cout << "Empty pet!" << endl;
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
        washing* washings = new washing[1];
        for (size_t i = 0; i < 1; i++)
        {
            cout << "Washinmachine Number #" << i << endl;
            washings[i].InputW();
            cout << endl;
        }
        system("pause");
        system("cls");
        for (size_t i = 0; i < 1; i++)
        {
            cout << "Washingmachine instance #" << i << endl;
            washings[i].OutputW();
            cout << endl;
        }
        return 0;
    }break;
    case 2:
    {
        iron* irons = new iron[1];
        for (size_t i = 0; i < 1; i++)
        {
            cout << "Iron Number #" << i << endl;
            irons[i].InputI();
            cout << endl;
        }
        system("pause");
        system("cls");
        for (size_t i = 0; i < 1; i++)
        {
            cout << "Iron instance #" << i << endl;
            irons[i].OutputI();
            cout << endl;
        }
        return 0;
    }break;
    case 3:
    {
        boiler* boilers = new boiler[1];
        for (size_t i = 0; i < 1; i++)
        {
            cout << "Boiler Number #" << i << endl;
            boilers[i].InputB();
            cout << endl;
        }
        system("pause");
        system("cls");
        for (size_t i = 0; i < 1; i++)
        {
            cout << "Boiler instance #" << i << endl;
            boilers[i].OutputB();
            cout << endl;
        }
        return 0;
    }break;
    case 4:
    {
        pet* pets = new pet[1];
        for (size_t i = 0; i < 1; i++)
        {
            cout << "Per Number #" << i << endl;
            pets[i].InputP();
            cout << endl;
        }
        system("pause");
        system("cls");
        for (size_t i = 0; i < 1; i++)
        {
            cout << "Pet instance #" << i << endl;
            pets[i].OutputP();
            cout << endl;
        }
        return 0;
    }break;
    }
}
