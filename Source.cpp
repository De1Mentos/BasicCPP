#include <iostream>
#include <windows.h>
#include <conio.h>
#include <io.h>
#include <fcntl.h>

using namespace std;

string name;

int points=10;

int � = 5;
int �� = 5;
int �� = 5;
int � = 5;
int � = 5;
int � = 5;

int Skillar;

int opcii;

void stats(string name)
{
    while (Skillar != 7)
    {
    system("cls");
    cout << "����� ������ �������� " << points << endl << endl;
    cout << "1.���� = " << � << endl;
    cout << "2.���������� = " << �� << endl;
    cout << "3.������������ = " << �� << endl;
    cout << "4.�������� = " << � << endl;
    cout << "5.�������� = " << � << endl;
    cout << "6.����� = " << � << endl << endl;
    cout << "7.��������� � ����� �� ����" << endl << endl << endl;

    cout << "������� ����� ������ ��� ������� �� ������ ������ ��� ��������/�������� - ";
    cin >> Skillar;
    system("cls");
    switch (Skillar)
    {
    case 1:
    {
        do
        {
             cout << "����, ���������" << endl;
       
             cout << "���� ���� = " << � << endl;
       
             cout << "1 = ���� ������ ��������� ���� ������ �� ��������� ����" << endl;
             cout << "2  = ���� ������ ������ ���� ������ � ����" << endl;
             cout << "0  = ���� �� ������ ����� � ����" << endl;
       
             cin >> opcii;
             if (opcii == 1)
             {
                 if (points > 0 && � <= 10)
                 {
                     points -= 1;
                     � += 1;
                     cout << "���� ��������" << endl;
                     _getch();
                     system("cls");
                 }
                 else
                 {
                     cout << "�� ���������� ����� ������/���� �������� �� ��������";
                     _getch();
                 }
             }
        } while (opcii == 0);
    }break;
    case 2:
    {

    }break;
    case 3:
    {

    }break;
    case 4:
    {

    }break;
    case 5:
    {

    }break;
    case 6:
    {

    }break;
    default:
    {
        cout << "������, ������ ������ ���� �� �����";
    }break;
    }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "�������� �������� �������� �� ����� "; cin >> name; cout << name << endl;
    stats(name);
    return 0;
}