#include <iostream>
#include <windows.h>
#include <fcntl.h>
#include <conio.h>
#include <io.h>
#include <cstdlib>

using namespace std;

string name = "��������";
int points=10;

int � = 3;
int �� = 3;
int �� = 3;
int � = 3;
int � = 3;
int � = 3;
int inv;

int Turn;
int TurnPick;
int EneHP;
int PlaHP;

int PickC;

int Skillar;

int opcii;
int opciiINV;
int opciiWEA;
int WeaPick;

int WeaUn0 = 1;
int WeaUn1;
int WeaUn2;
int WeaUn3;
int WeaUn4;
int WeaUn5;

int MeD;
int RaD;
int Crit;
int PlPt;

int armUn0 = 1;
int armUn1;
int armUn2;
int armUn3;
int armUn4;
int armUn5;

int Weapon = 0;
int Armor = 0;

int Event;

int Floor =1; void randomEV(string name)
{
    Event = rand() % 100;
    cout << Event;
    if (Event >= 92)
    {
        system("cls");
        cout << "�� ����� ������� �� ��������� ����!" << endl;
        _getch();
        Floor += 1;
    }
    if (Event <= 20)
    {
        system("cls");
        cout << "��� ��������� ���������!" << endl;
        _getch();
    }
    if (Event >= 20 && Event <= 25)
    {
        system("cls");
        cout << "�����. ������ ����������, ������ ��� ���������" << endl;
        _getch();
    }
    if (Event >= 26 && Event <= 30)
    {
        system("cls");
        cout << "�����. ������ ����������, ������ ��� ��������" << endl;
        _getch();
    }
    if (Event >= 31 && Event <= 50)
    {
        system("cls");
        cout << "�� ������������� ������ ��� �����������" << endl;
        _getch();
    }
    if (Event >= 51 && Event <= 55)
    {
        system("cls");
        cout << "�� ����� �������� ����. ���� �������� ��������� �������������" << endl;
        _getch();
    }
    if (Event >= 56 && Event <= 60)
    {
        system("cls");
        cout << "�� ����� ������� �� ����, ��� ���" << endl;
        _getch();
    }
    if (Event >= 61 && Event <= 65)
    {
        system("cls");
        cout << "�� ������� ��������" << endl;
        _getch();
    }
    if (Event >= 66 && Event <= 70)
    {
        system("cls");
        cout << "�������� �����. ����� ���������� ������� ����� ��� �� ����� ���������" << endl;
        _getch();
        cout << "1 - ���������� ������� � �����" << endl;
        cout << "2 - ���������� ������� � ���������" << endl;
        cout << "����� ������ ����� - �������� ����� � ����� (������������?)" << endl;
        cin >> PickC;
        if (PickC == 1)
        {
            cout << "�� ��������� ������� � �����..." << endl;
            _getch();
            if (� >= 7)
            {
                cout << "...� ��� ������� ��� �������! �� ������ ���������... " << endl;
                _getch();
                if (Event <= 13)
                {
                    cout << "��� ��������� �������� �����" << endl;
                    � += 1;
                    cout << "���� ���� ������ ���������" << � << endl;
                }
                if (Event >= 14 && Event <= 27)
                {
                    cout << "��������, ����� � ������" << endl;
                    �� += 1;
                    cout << "���� ���������� ������ ���������" << �� << endl;
                }
                if (Event >= 28 && Event <= 41)
                {
                    cout << "��� ��������� �����" << endl;
                    �� += 1;
                    cout << "���� ������������ ������ ���������" << �� << endl;
                }
                if (Event >= 42 && Event <= 55)
                {
                    cout << "�������� �� ���������� ��" << endl;
                    �� += 1;
                    cout << "��� �������� ������ ���������" << � << endl;
                }
                if (Event >= 56 && Event <= 69)
                {
                    cout << "��� �������� ������������ �� ��������? �������������� �������" << endl;
                    � += 1;
                    cout << "���� �������� ������ ���������" << � << endl;
                }
                if (Event >= 70 && Event <= 83)
                {
                    cout << "������ � ��������� ��� ���-����" << endl;
                    � += 1;
                    cout << "���� ����� ������ ���������" << � << endl;
                }
                if (Event >= 84 && Event <= 100)
                {
                    cout << "����������� �������������" << endl;
                    points += 1;
                    cout << "�� �������� 1 ���� ��������� ������!" << endl;
                }
            }
            else
            {
                cout << "...�� ��� ������, � ����� ������ �����������." << endl;
                _getch();
            }
        }
        else if (PickC == 2)
        {
            cout << "�� ��������� ������� � ��������..." << endl;
            _getch();
            if (� >= 7)
            {
                cout << "...� ��� ������� ��� �������! �� ������ ���������... " << endl;
                _getch();
                if (Event <= 13)
                {
                    cout << "��� ��������� �������� �����" << endl;
                    � += 1;
                    cout << "���� ���� ������ ���������" << � << endl;
                }
                if (Event >= 14 && Event <= 27)
                {
                    cout << "��������, ����� � ������" << endl;
                    �� += 1;
                    cout << "���� ���������� ������ ���������" << �� << endl;
                }
                if (Event >= 28 && Event <= 41)
                {
                    cout << "��� ��������� �����" << endl;
                    �� += 1;
                    cout << "���� ������������ ������ ���������" << �� << endl;
                }
                if (Event >= 42 && Event <= 55)
                {
                    cout << "�������� �� ���������� ��" << endl;
                    �� += 1;
                    cout << "��� �������� ������ ���������" << � << endl;
                }
                if (Event >= 56 && Event <= 69)
                {
                    cout << "��� �������� ������������ �� ��������? �������������� �������" << endl;
                    � += 1;
                    cout << "���� �������� ������ ���������" << � << endl;
                }
                if (Event >= 70 && Event <= 83)
                {
                    cout << "������ � ��������� ��� ���-����" << endl;
                    � += 1;
                    cout << "���� ����� ������ ���������" << � << endl;
                }
                if (Event >= 84 && Event <= 100)
                {
                    cout << "����������� �������������" << endl;
                    points += 1;
                    cout << "�� �������� 1 ���� ��������� ������!" << endl;
                }
            }
            else
            {
                cout << "...�� ��� ������, � ����� ������ �����������." << endl;
                _getch();
            }
        }
        else
        {
            cout << "�� ������ ���� � ��������� �����. ��� ��� �� ����." << endl;
            _getch();
        }

    }
    if (Event >= 71 && Event <= 75)
    {
        system("cls");
        cout << "������������ ��������, ����� ���������� ��� ��������" << endl;
        _getch();
        cout << "�� ����������� ���� " << � * 10 + 40 << " IQ ��� �� �������� ���" << endl;
        if (� > 6)
        {
            cout << "��� ������� ������� ���������. �� ��� ��������� ��������� �������� ��... " << endl;
            _getch();
            if (Event <= 13)
            {
                cout << "��� ��������� �������� �����" << endl;
                � += 1;
                cout << "���� ���� ������ ���������" << � << endl;
            }
            if (Event >= 14 && Event <= 27)
            {
                cout << "��������, ����� � ������" << endl;
                �� += 1;
                cout << "���� ���������� ������ ���������" << �� << endl;
            }
            if (Event >= 28 && Event <= 41)
            {
                cout << "��� ��������� �����" << endl;
                �� += 1;
                cout << "���� ������������ ������ ���������" << �� << endl;
            }
            if (Event >= 42 && Event <= 55)
            {
                cout << "�������� �� ���������� ��" << endl;
                �� += 1;
                cout << "��� �������� ������ ���������" << � << endl;
            }
            if (Event >= 56 && Event <= 69)
            {
                cout << "��� �������� ������������ �� ��������? �������������� �������" << endl;
                � += 1;
                cout << "���� �������� ������ ���������" << � << endl;
            }
            if (Event >= 70 && Event <= 83)
            {
                cout << "������ � ��������� ��� ���-����" << endl;
                � += 1;
                cout << "���� ����� ������ ���������" << � << endl;
            }
            if (Event >= 84 && Event <= 100)
            {
                cout << "����������� �������������" << endl;
                points += 1;
                cout << "�� �������� 1 ���� ��������� ������!" << endl;
            }
        }
        else if (� <= 6)
        {
            cout << "����������, ��� ����� ������ ���������...";
            _getch();
        }
    }
    if (Event >= 76 && Event <= 80)
    {
        system("cls");
        cout << "�� ������� �����!.." << endl;
        _getch();
        cout << "��� �� ��� �� �����?" << endl;
        _getch();
        cout << "�� ������ ������������ ���� ���������� ��� �� ������ �����..." << endl;
        _getch();
        if (�� >= 7)
        {
            cout << "�� ����� ���� �����! �������-��!" << endl;
            Floor += 1;
            _getch();
        }
        else
        {
            cout << "��� ��������� ������ ���������� (�������, ������, �� ������ ������������) ��� �� ���������� ����� ��� ��� ���. �� ������ ����� �����" << endl;
            _getch();
        }
    }
    if (Event >= 76 && Event <= 80)
    {
        system("cls");
        cout << "���������, ��� ���� ���-�� ������?" << endl;
        _getch();
    }
    if (Event >= 81 && Event <= 84)
    {
        system("cls");
        cout << "�� ����� ������� �� ����, ��� ���" << endl;
        _getch();
    }
    if (Event >= 85 && Event <= 90)
    {
        system("cls");
        cout << "�� ��, �������-��������� �����. ����� �� ������ ���� �������, �������� ��������" << endl;
        _getch();
    }
}

void invento(string name)
{
    do
    {
        system("cls");
        if (Weapon == 0)
        {
            MeD = 10 * � / 2;
            RaD = 0 * �� / 2;
            Crit = 1 + � - 2;

            cout << "������: ����" << endl;
            cout << "������� ���� - " << MeD << endl;
            cout << "������� ���� - " << RaD << endl;
            cout << "���� ����� - " << Crit << "%" << endl;
            cout << "�����������:" << endl;
            cout << "����" << endl << endl;
        }
        else if (Weapon == 1)
        {
            cout << "������: �����" << endl;
            cout << "������� ���� - " << 30 + � / 2 << endl;
            cout << "������� ���� - " << 5 * �� / 2 << endl;
            cout << "���� ����� - " << 1 + � - 2 << "%" << endl << endl;
            cout << "�����������:" << endl;
            cout << "����" << endl << endl;
        }
        if (Armor == 0)
        {
            PlPt = 0 * �� / 2;

            cout << "�����: ������" << endl;
            cout << "������ - " << PlPt << endl;
            cout << "�����������:" << endl;
            cout << "����" << endl;
        }
        cout << "�������� ��������" << endl;
        cout << "1 - �������� ������" << endl;
        cout << "2 - �������� �����" << endl;
        cout << "3 - ����� �� ���������" << endl;
        cin >> opciiINV;
        if (opciiINV == 1)
        {
            do
            {
                system("cls");
                cout << "�� ������ ������ ������������" << endl;
                if (Weapon == 0)
                {
                    MeD = 10 * � / 2;
                    RaD = 0 * �� / 2;
                    Crit = 1 + � - 2;

                    cout << "������: ����" << endl;
                    cout << "������� ���� - " << MeD << endl;
                    cout << "������� ���� - " << RaD << endl;
                    cout << "���� ����� - " << Crit << "%" << endl;
                    cout << "�����������:" << endl;
                    cout << "����" << endl << endl;
                }
                cout << "1 - �������� ������ �� ������" << endl;
                cout << "2 - ����� �� ����" << endl;
                cin >> opciiINV;
                if (opciiINV == 1)
                {
                    if (WeaUn0 == 1)
                    {
                        cout << "1 - ����" << endl;
                    }
                    if (WeaUn0 == 2)
                    {
                        cout << "2 - �����" << endl;
                    }
                    cout << "99 - �����" << endl;
                    cin >> WeaPick;
                    if (WeaPick == 1 && WeaUn0 == 1)
                    {
                        Weapon = 0;
                    }
                    else if (WeaPick == 1 && WeaUn0 == 0)
                    {
                        cout << "������ ������ � ��� ����!";
                    }
                    if (WeaPick == 99)
                    {
                        break;
                    }
                }
            } while (opciiINV != 2);
        }
        if (opciiINV == 2)
        {
            PlPt = 0 * �� / 2;

            cout << "�����: ������" << endl;
            cout << "������ - " << PlPt << endl;
            cout << "�����������:" << endl;
            cout << "����" << endl;
            system("cls");
            return;
        }
        if (opciiINV == 3)
        {
            system("cls");
            return;
        }
    } while (opciiINV == 3);
}

void fight(string name, int Enemie, int �, int ��, int ��, int �, int �, int �)
{
    if (Floor == 1)
    {
        Turn = 1;
        cout << "����� ���� ���������� ���������, ��������� - ���������.";
        EneHP =
            do
            {
                if (Turn == 1)
                {
                    cout << "�������� ���������� " << EneHP;
                    cout << "��� �� ������ �������?" << endl << endl;
                    cout << "1 - ��������� � �����" << endl;
                    cout << "2 - ��������� �� ������" << endl;
                    cout << "3 - ����������" << endl;
                    cout << "4 - �������" << endl;
                    cin >> TurnPick;
                    if (TurnPick == 1)
                    {
                        cout << "�� ��������� ���������� ������!" << endl;
                        _getch();
                        cout << "�������� " << MeD << " ����� ����������!" << endl;
                    }
                    else if (TurnPick == 2)
                    {

                    }
                    else if (TurnPick == 3)
                    {

                    }
                    else if (TurnPick == 4)
                    {

                    }
                    else
                    {
                        cout << "����� ����� ����!";
                    }
                }
            } while (EneHP <= 1);
            cout << "��������� ����!" << endl;
    }
    else if (Floor == 2)
    {

    }
}

void stats(string name)
{
    while (Skillar != 7)
    {
        system("cls");
        cout << "�������� �� ����� " << name << endl << endl;
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
                cout << "���� - ����������� ��� ��������� ���� ������� �������." << endl;

                cout << "���� ���� = " << � << endl;

                cout << "1 = ���� ������ ��������� ���� ������ �� ��������� ����" << endl;
                cout << "0  = ���� �� ������ ����� � ����" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && � <= 9)
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
            do
            {
                cout << "����������, �������� ���� ��������" << endl;

                cout << "���� ���������� = " << �� << endl;

                cout << "1 = ���� ������ ��������� ���� ������ �� ��������� ����������" << endl;
                cout << "0  = ���� �� ������ ����� � ����" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && �� <= 9)
                    {
                        points -= 1;
                        �� += 1;
                        cout << "���������� ��������" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        cout << "�� ���������� ����� ������/���������� �������� �� ��������";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 3:
        {
            do
            {
                cout << "������������, ����������� ���� ������������ �������� � �����" << endl;

                cout << "���� ������������ = " << �� << endl;

                cout << "1 = ���� ������ ��������� ���� ������ �� ��������� ������������" << endl;
                cout << "0  = ���� �� ������ ����� � ����" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && �� <= 9)
                    {
                        points -= 1;
                        �� += 1;
                        cout << "������������ ��������" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        cout << "�� ���������� ����� ������/������������ �������� �� ��������";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 4:
        {
            do
            {
                cout << "��������, ������ ����� �� ��������" << endl;

                cout << "��� �������� = " << � << endl;

                cout << "1 = ���� ������ ��������� ���� ������ �� ��������� ���������" << endl;
                cout << "0  = ���� �� ������ ����� � ����" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && � <= 9)
                    {
                        points -= 1;
                        � += 1;
                        cout << "�������� ��������" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        cout << "�� ���������� ����� ������/�������� ������� �� ��������";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 5:
        {
            do
            {
                cout << "��������, ���� ���������� �� ����� ��� ������� � ���" << endl;

                cout << "���� �������� = " << � << endl;

                cout << "1 = ���� ������ ��������� ���� ������ �� ��������� ��������" << endl;
                cout << "0  = ���� �� ������ ����� � ����" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && � <= 9)
                    {
                        points -= 1;
                        � += 1;
                        cout << "�������� ��������" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        cout << "�� ���������� ����� ������/�������� �������� �� ��������";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 6:
        {
            do
            {
                cout << "�����, ����������� ���� ������������ ��������� � ���� ������ ������ �������" << endl;

                cout << "���� ����� = " << � << endl;

                cout << "1 = ���� ������ ��������� ���� ������ �� ��������� �����" << endl;
                cout << "0  = ���� �� ������ ����� � ����" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && � <= 9)
                    {
                        points -= 1;
                        � += 1;
                        cout << "����� ��������" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        cout << "�� ���������� ����� ������/����� �������� �� ��������";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 7:
        {
            return;
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
    stats(name);
    Skillar += 1;
    int TravelAction = 0;
    srand(static_cast<unsigned int>(time(0)));
    do
    {
        system("cls");
        if (Floor == 1)
        {
            cout << "������ ���� ����������� 'Commonwealth'. ���������, ��� ������ ��� ������� ������? ";
        }
        else if (Floor == 2)
        {
            cout << "������ ����. ��� ��� ���-��. ";
        }
        else if (Floor == 3)
        {
            cout << "������ ����. �� ���������, �� ��� ����� ����� � ����! ";
        }
        else if (Floor == 4)
        {
            cout << "��������� ����. ������� ������ �������� ��� ��������. ";
        }
        else if (Floor == 5)
        {
            cout << "����� ����, ��������. ��� ���� ������ ������� ����... ";
        }
        else if (Floor == 6)
        {
            cout << "������ ����. ����������� ����������. ";
        }
        else if (Floor == 7)
        {

        }
        else if (Floor == 8)
        {

        }
        else if (Floor == 9)
        {
            cout << "������� ����. � ��� ���������� �������, ��� �� ��������� ����� ��� ���� ��������� �����... ";
        }
        else if (Floor == 10)
        {

        }
        cout << "��� �� ������ �������?" << endl << endl;
        cout << "1 - ����� �����" << endl;
        cout << "2 - ����� �����" << endl;
        cout << "3 - ����� ������" << endl;
        cout << "4 - ���������" << endl;
        cout << "5 - ���� ��������" << endl;

        cin >> TravelAction;
        if (TravelAction == 1)
        {
            cout << "�� ����� �����..." << endl;
            randomEV(name);
        }
        else if (TravelAction == 2)
        {
            cout << "�� ����� �����..." << endl;
            randomEV(name);
        }
        else if (TravelAction == 3)
        {
            cout << "�� ����� ������..." << endl;
            randomEV(name);
        }
        else if (TravelAction == 4)
        {
            invento(name);
            inv += 1;
        }
        else if (TravelAction == 5)
        {
            stats(name);
            Skillar += 1;
        }
    } while (true);
}
