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

void Fight(int Event, int �, int ��, int ��, int �, int �, int �, int EneHP, int PlaHP, int Floor)
{
    if (Floor == 1)
    {
        Turn = 1;
        std::cout << "����� ���� ���������� ���������, ��������� - ���������.";
        EneHP = (� + �� + �� + � + � + �) * 2 + 40;
        PlaHP = �� * 4 + 100;
        do
        {
            if (Turn == 1 && PlaHP >= 1)
            {
                std::cout << "�������� ������ = " << PlaHP << endl;
                std::cout << "�������� ���������� = " << EneHP << endl << endl;
                std::cout << "��� �� ������ �������?" << endl << endl;
                std::cout << "1 - ��������� � �����" << endl;
                std::cout << "2 - ��������� �� ������" << endl;
                std::cout << "3 - ����������" << endl;
                std::cout << "4 - ��������� �����" << endl;
                cin >> TurnPick;
                if (TurnPick == 1)
                {
                    std::cout << "�� ��������� ���������� ������!" << endl;
                    _getch();
                    std::cout << "�������� ";
                    Event = rand() % 100;
                    if (Event + Crit >= 100)
                    {
                        std::cout << MeD * 3 << "������������";
                        EneHP -= MeD * 3;
                    }
                    else
                    {
                        std::cout << MeD;
                        EneHP -= MeD;
                    }
                    std::cout << " ����� ����������!" << endl;

                    Turn = 0;
                }
                else if (TurnPick == 2)
                {
                    std::cout << "�� ��������� ���������� ��������!" << endl;
                    _getch();
                    std::cout << "�������� ";
                    Event = rand() % 100;
                    if (Event + Crit >= 100)
                    {
                        std::cout << RaD * 3 << "������������";
                        EneHP -= RaD * 3;
                    }
                    else
                    {
                        std::cout << RaD;
                        EneHP -= RaD;
                    }
                    std::cout << " ����� ����������!" << endl;

                    Turn = 0;
                }
                else if (TurnPick == 3)
                {
                    std::cout << "�� �����������!" << endl;
                    _getch();
                    Event = rand() % 100;
                    std::cout << "������������� " << Event / 10 * (�� - 2) + � << " ��!";
                    PlaHP += Event / 10 * ��;

                    Turn = 0;
                }
                else if (TurnPick == 4)
                {
                    std::cout << "�� ��������� ��������� ����� ����������!" << endl;
                    _getch();
                    Event = rand() % 100;
                    if (Event / 5 * � - EneHP / 3 >= 100)
                    {
                        std::cout << "��� ������� ��� ��������� �����!" << endl;
                        EneHP = 0;
                    }
                    else
                    {
                        std::cout << "�� �������, ���������� �������� ����������." << endl;
                    }
                    Turn = 0;
                }
                else
                {
                    std::cout << "����� ����� ����!";
                }
            }
            else if (Turn == 1 && PlaHP >= 1)
            {
                std::cout << "�� ������, � ����� ��, � ������ ������ ���� � ������, �� � ��� ��� �������� - ������������� 100 ��" << endl;
                PlaHP = +100;

                Turn = 0;
            }
            else if (Turn == 0)
            {
                Event = rand() % 100;
                if (Event >= 70)
                {
                    std::cout << "��������� ������� ��� " << 20 * Floor / 2 - PlPt / 2 << " �����!" << endl;
                    PlaHP -= 20 * Floor / 2 - PlPt / 2;
                }
                else if (Event <= 95)
                {
                    std::cout << "��������� ������� ��� " << 2 * 20 * Floor / 2 - PlPt / 2 << " ������������ �����!" << endl;
                    PlaHP -= 2 * 20 * Floor / 2 - PlPt / 2;
                }
                else
                {
                    std::cout << "��������� ����������, � �������������� " << 10 * Floor - � << " ��!" << endl;
                    EneHP += 10 * Floor - �;
                }
            }
        } while (EneHP <= 1);
        std::cout << "��������� ����!" << endl;
    }
    else if (Floor == 2)
    {

    }
}

int Floor =1; void randomEV(string name)
{
    Event = rand() % 100;
    std::cout << Event;
    if (Event >= 92)
    {
        system("cls");
        std::cout << "�� ����� ������� �� ��������� ����!" << endl;
        _getch();
        Floor += 1;
    }
    if (Event <= 20)
    {
        system("cls");
        std::cout << "��� ��������� ���������!" << endl;
        _getch();
        Fight(Event, �, ��, ��, �, �, �, EneHP, PlaHP, Floor);
    }
    if (Event >= 20 && Event <= 25)
    {
        system("cls");
        std::cout << "�����. ������ ����������, ������ ��� ���������" << endl;
        _getch();
    }
    if (Event >= 26 && Event <= 30)
    {
        system("cls");
        std::cout << "�����. ������ ����������, ������ ��� ��������" << endl;
        _getch();
    }
    if (Event >= 31 && Event <= 50)
    {
        system("cls");
        std::cout << "�� ������������� ������ ��� �����������" << endl;
        _getch();
    }
    if (Event >= 51 && Event <= 55)
    {
        system("cls");
        std::cout << "�� ����� �������� ����. ���� �������� ��������� �������������" << endl;
        _getch();
    }
    if (Event >= 56 && Event <= 60)
    {
        system("cls");
        std::cout << "�� ����� ������� �� ����, ��� ���" << endl;
        _getch();
    }
    if (Event >= 61 && Event <= 65)
    {
        system("cls");
        std::cout << "�� ������� ��������" << endl;
        _getch();
    }
    if (Event >= 66 && Event <= 70)
    {
        system("cls");
        std::cout << "�������� �����. ����� ���������� ������� ����� ��� �� ����� ���������" << endl;
        _getch();
        std::cout << "1 - ���������� ������� � �����" << endl;
        std::cout << "2 - ���������� ������� � ���������" << endl;
        std::cout << "����� ������ ����� - �������� ����� � ����� (������������?)" << endl;
        cin >> PickC;
        if (PickC == 1)
        {
            std::cout << "�� ��������� ������� � �����..." << endl;
            _getch();
            if (� >= 7)
            {
                std::cout << "...� ��� ������� ��� �������! �� ������ ���������... " << endl;
                _getch();
                if (Event <= 13)
                {
                    std::cout << "��� ��������� �������� �����" << endl;
                    � += 1;
                    std::cout << "���� ���� ������ ���������" << � << endl;
                }
                if (Event >= 14 && Event <= 27)
                {
                    std::cout << "��������, ����� � ������" << endl;
                    �� += 1;
                    std::cout << "���� ���������� ������ ���������" << �� << endl;
                }
                if (Event >= 28 && Event <= 41)
                {
                    std::cout << "��� ��������� �����" << endl;
                    �� += 1;
                    std::cout << "���� ������������ ������ ���������" << �� << endl;
                }
                if (Event >= 42 && Event <= 55)
                {
                    std::cout << "�������� �� ���������� ��" << endl;
                    �� += 1;
                    std::cout << "��� �������� ������ ���������" << � << endl;
                }
                if (Event >= 56 && Event <= 69)
                {
                    std::cout << "��� �������� ������������ �� ��������? �������������� �������" << endl;
                    � += 1;
                    std::cout << "���� �������� ������ ���������" << � << endl;
                }
                if (Event >= 70 && Event <= 83)
                {
                    std::cout << "������ � ��������� ��� ���-����" << endl;
                    � += 1;
                    std::cout << "���� ����� ������ ���������" << � << endl;
                }
                if (Event >= 84 && Event <= 100)
                {
                    std::cout << "����������� �������������" << endl;
                    points += 1;
                    std::cout << "�� �������� 1 ���� ��������� ������!" << endl;
                }
            }
            else
            {
                std::cout << "...�� ��� ������, � ����� ������ �����������." << endl;
                _getch();
            }
        }
        else if (PickC == 2)
        {
            std::cout << "�� ��������� ������� � ��������..." << endl;
            _getch();
            if (� >= 7)
            {
                std::cout << "...� ��� ������� ��� �������! �� ������ ���������... " << endl;
                _getch();
                if (Event <= 13)
                {
                    std::cout << "��� ��������� �������� �����" << endl;
                    � += 1;
                    std::cout << "���� ���� ������ ���������" << � << endl;
                }
                if (Event >= 14 && Event <= 27)
                {
                    std::cout << "��������, ����� � ������" << endl;
                    �� += 1;
                    std::cout << "���� ���������� ������ ���������" << �� << endl;
                }
                if (Event >= 28 && Event <= 41)
                {
                    std::cout << "��� ��������� �����" << endl;
                    �� += 1;
                    std::cout << "���� ������������ ������ ���������" << �� << endl;
                }
                if (Event >= 42 && Event <= 55)
                {
                    std::cout << "�������� �� ���������� ��" << endl;
                    �� += 1;
                    std::cout << "��� �������� ������ ���������" << � << endl;
                }
                if (Event >= 56 && Event <= 69)
                {
                    std::cout << "��� �������� ������������ �� ��������? �������������� �������" << endl;
                    � += 1;
                    std::cout << "���� �������� ������ ���������" << � << endl;
                }
                if (Event >= 70 && Event <= 83)
                {
                    std::cout << "������ � ��������� ��� ���-����" << endl;
                    � += 1;
                    std::cout << "���� ����� ������ ���������" << � << endl;
                }
                if (Event >= 84 && Event <= 100)
                {
                    std::cout << "����������� �������������" << endl;
                    points += 1;
                    std::cout << "�� �������� 1 ���� ��������� ������!" << endl;
                }
            }
            else
            {
                std::cout << "...�� ��� ������, � ����� ������ �����������." << endl;
                _getch();
            }
        }
        else
        {
        std::cout << "�� ������ ���� � ��������� �����. ��� ��� �� ����." << endl;
            _getch();
        }

    }
    if (Event >= 71 && Event <= 75)
    {
        system("cls");
        std::cout << "������������ ��������, ����� ���������� ��� ��������" << endl;
        _getch();
        std::cout << "�� ����������� ���� " << � * 10 + 40 << " IQ ��� �� �������� ���" << endl;
        if (� > 6)
        {
            std::cout << "��� ������� ������� ���������. �� ��� ��������� ��������� �������� ��... " << endl;
            _getch();
            if (Event <= 13)
            {
                std::cout << "��� ��������� �������� �����" << endl;
                � += 1;
                std::cout << "���� ���� ������ ���������" << � << endl;
            }
            if (Event >= 14 && Event <= 27)
            {
                std::cout << "��������, ����� � ������" << endl;
                �� += 1;
                std::cout << "���� ���������� ������ ���������" << �� << endl;
            }
            if (Event >= 28 && Event <= 41)
            {
                std::cout << "��� ��������� �����" << endl;
                �� += 1;
                std::cout << "���� ������������ ������ ���������" << �� << endl;
            }
            if (Event >= 42 && Event <= 55)
            {
                std::cout << "�������� �� ���������� ��" << endl;
                �� += 1;
                std::cout << "��� �������� ������ ���������" << � << endl;
            }
            if (Event >= 56 && Event <= 69)
            {
                std::cout << "��� �������� ������������ �� ��������? �������������� �������" << endl;
                � += 1;
                std::cout << "���� �������� ������ ���������" << � << endl;
            }
            if (Event >= 70 && Event <= 83)
            {
                std::cout << "������ � ��������� ��� ���-����" << endl;
                � += 1;
                std::cout << "���� ����� ������ ���������" << � << endl;
            }
            if (Event >= 84 && Event <= 100)
            {
                std::cout << "����������� �������������" << endl;
                points += 1;
                std::cout << "�� �������� 1 ���� ��������� ������!" << endl;
            }
        }
        else if (� <= 6)
        {
            std::cout << "����������, ��� ����� ������ ���������...";
            _getch();
        }
    }
    if (Event >= 76 && Event <= 80)
    {
        system("cls");
        std::cout << "�� ������� �����!.." << endl;
        _getch();
        std::cout << "��� �� ��� �� �����?" << endl;
        _getch();
        std::cout << "�� ������ ������������ ���� ���������� ��� �� ������ �����..." << endl;
        _getch();
        if (�� >= 7)
        {
            std::cout << "�� ����� ���� �����! �������-��!" << endl;
            Floor += 1;
            _getch();
        }
        else
        {
            std::cout << "��� ��������� ������ ���������� (�������, ������, �� ������ ������������) ��� �� ���������� ����� ��� ��� ���. �� ������ ����� �����" << endl;
            _getch();
        }
    }
    if (Event >= 76 && Event <= 80)
    {
        system("cls");
        std::cout << "���������, ��� ���� ���-�� ������?" << endl;
        _getch();
    }
    if (Event >= 81 && Event <= 84)
    {
        system("cls");
        std::cout << "�� ����� ������� �� ����, ��� ���" << endl;
        _getch();
    }
    if (Event >= 85 && Event <= 90)
    {
        system("cls");
        std::cout << "�� ��, �������-��������� �����. ����� �� ������ ���� �������, �������� ��������" << endl;
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

            std::cout << "������: ����" << endl;
            std::cout << "������� ���� - " << MeD << endl;
            std::cout << "������� ���� - " << RaD << endl;
            std::cout << "���� ����� - " << Crit << "%" << endl;
            std::cout << "�����������:" << endl;
            std::cout << "����" << endl << endl;
        }
        else if (Weapon == 1)
        {
           std::cout << "������: �����" << endl;
           std::cout << "������� ���� - " << 30 + � / 2 << endl;
           std::cout << "������� ���� - " << 5 * �� / 2 << endl;
           std::cout << "���� ����� - " << 1 + � - 2 << "%" << endl << endl;
           std::cout << "�����������:" << endl;
           std::cout << "����" << endl << endl;
        }
        if (Armor == 0)
        {
            PlPt = 0 * �� / 2;

            std::cout << "�����: ������" << endl;
            std::cout << "������ - " << PlPt << endl;
            std::cout << "�����������:" << endl;
            std::cout << "����" << endl;
        }
        std::cout << "�������� ��������" << endl;
        std::cout << "1 - �������� ������" << endl;
        std::cout << "2 - �������� �����" << endl;
        std::cout << "3 - ����� �� ���������" << endl;
        cin >> opciiINV;
        if (opciiINV == 1)
        {
            do
            {
                system("cls");
                std::cout << "�� ������ ������ ������������" << endl;
                if (Weapon == 0)
                {
                    MeD = 10 * � / 2;
                    RaD = 0 * �� / 2;
                    Crit = 1 + � - 2;

                    std::cout << "������: ����" << endl;
                    std::cout << "������� ���� - " << MeD << endl;
                    std::cout << "������� ���� - " << RaD << endl;
                    std::cout << "���� ����� - " << Crit << "%" << endl;
                    std::cout << "�����������:" << endl;
                    std::cout << "����" << endl << endl;
                }
                std::cout << "1 - �������� ������ �� ������" << endl;
                std::cout << "2 - ����� �� ����" << endl;
                cin >> opciiINV;
                if (opciiINV == 1)
                {
                    if (WeaUn0 == 1)
                    {
                        std::cout << "1 - ����" << endl;
                    }
                    if (WeaUn0 == 2)
                    {
                        std::cout << "2 - �����" << endl;
                    }
                    std::cout << "99 - �����" << endl;
                    cin >> WeaPick;
                    if (WeaPick == 1 && WeaUn0 == 1)
                    {
                        Weapon = 0;
                    }
                    else if (WeaPick == 1 && WeaUn0 == 0)
                    {
                        std::cout << "������ ������ � ��� ����!";
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

            std::cout << "�����: ������" << endl;
            std::cout << "������ - " << PlPt << endl;
            std::cout << "�����������:" << endl;
            std::cout << "����" << endl;
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

void stats(string name)
{
    while (Skillar != 7)
    {
        system("cls");
        std::cout << "�������� �� ����� " << name << endl << endl;
        std::cout << "����� ������ �������� " << points << endl << endl;
        std::cout << "1.���� = " << � << endl;
        std::cout << "2.���������� = " << �� << endl;
        std::cout << "3.������������ = " << �� << endl;
        std::cout << "4.�������� = " << � << endl;
        std::cout << "5.�������� = " << � << endl;
        std::cout << "6.����� = " << � << endl << endl;
        std::cout << "7.��������� � ����� �� ����" << endl << endl << endl;

        std::cout << "������� ����� ������ ��� ������� �� ������ ������ ��� ��������/�������� - ";
        cin >> Skillar;
        system("cls");
        switch (Skillar)
        {
        case 1:
        {
            do
            {
                std::cout << "���� - ����������� ��� ��������� ���� ������� �������." << endl;

                std::cout << "���� ���� = " << � << endl;

                std::cout << "1 = ���� ������ ��������� ���� ������ �� ��������� ����" << endl;
                std::cout << "0  = ���� �� ������ ����� � ����" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && � <= 9)
                    {
                        points -= 1;
                        � += 1;
                        std::cout << "���� ��������" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        std::cout << "�� ���������� ����� ������/���� �������� �� ��������";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 2:
        {
            do
            {
                std::cout << "����������, �������� ���� ��������" << endl;

                std::cout << "���� ���������� = " << �� << endl;

                std::cout << "1 = ���� ������ ��������� ���� ������ �� ��������� ����������" << endl;
                std::cout << "0  = ���� �� ������ ����� � ����" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && �� <= 9)
                    {
                        points -= 1;
                        �� += 1;
                        std::cout << "���������� ��������" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        std::cout << "�� ���������� ����� ������/���������� �������� �� ��������";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 3:
        {
            do
            {
                std::cout << "������������, ����������� ���� ������������ �������� � �����" << endl;

                std::cout << "���� ������������ = " << �� << endl;

                std::cout << "1 = ���� ������ ��������� ���� ������ �� ��������� ������������" << endl;
                std::cout << "0  = ���� �� ������ ����� � ����" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && �� <= 9)
                    {
                        points -= 1;
                        �� += 1;
                        std::cout << "������������ ��������" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        std::cout << "�� ���������� ����� ������/������������ �������� �� ��������";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 4:
        {
            do
            {
                std::cout << "��������, ������ ����� �� ��������" << endl;

                std::cout << "��� �������� = " << � << endl;

                std::cout << "1 = ���� ������ ��������� ���� ������ �� ��������� ���������" << endl;
                std::cout << "0  = ���� �� ������ ����� � ����" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && � <= 9)
                    {
                        points -= 1;
                        � += 1;
                        std::cout << "�������� ��������" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        std::cout << "�� ���������� ����� ������/�������� ������� �� ��������";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 5:
        {
            do
            {
                std::cout << "��������, ���� ���������� �� ����� ��� ������� � ���" << endl;

                std::cout << "���� �������� = " << � << endl;

                std::cout << "1 = ���� ������ ��������� ���� ������ �� ��������� ��������" << endl;
                std::cout << "0  = ���� �� ������ ����� � ����" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && � <= 9)
                    {
                        points -= 1;
                        � += 1;
                        std::cout << "�������� ��������" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        std::cout << "�� ���������� ����� ������/�������� �������� �� ��������";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 6:
        {
            do
            {
                std::cout << "�����, ����������� ���� ������������ ��������� � ���� ������ ������ �������" << endl;

                std::cout << "���� ����� = " << � << endl;

                std::cout << "1 = ���� ������ ��������� ���� ������ �� ��������� �����" << endl;
                std::cout << "0  = ���� �� ������ ����� � ����" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && � <= 9)
                    {
                        points -= 1;
                        � += 1;
                        std::cout << "����� ��������" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        std::cout << "�� ���������� ����� ������/����� �������� �� ��������";
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
            std::cout << "������, ������ ������ ���� �� �����";
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
            std::cout << "������ ���� ����������� 'Commonwealth'. ���������, ��� ������ ��� ������� ������? ";
        }
        else if (Floor == 2)
        {
            std::cout << "������ ����. ��� ��� ���-��. ";
        }
        else if (Floor == 3)
        {
            std::cout << "������ ����. �� ���������, �� ��� ����� ����� � ����! ";
        }
        else if (Floor == 4)
        {
            std::cout << "��������� ����. ������� ������ �������� ��� ��������. ";
        }
        else if (Floor == 5)
        {
            std::cout << "����� ����, ��������. ��� ���� ������ ������� ����... ";
        }
        else if (Floor == 6)
        {
            std::cout << "������ ����. ����������� ����������. ";
        }
        else if (Floor == 7)
        {

        }
        else if (Floor == 8)
        {

        }
        else if (Floor == 9)
        {
            std::cout << "������� ����. � ��� ���������� �������, ��� �� ��������� ����� ��� ���� ��������� �����... ";
        }
        else if (Floor == 10)
        {

        }
        std::cout << "��� �� ������ �������?" << endl << endl;
        std::cout << "1 - ����� �����" << endl;
        std::cout << "2 - ����� �����" << endl;
        std::cout << "3 - ����� ������" << endl;
        std::cout << "4 - ���������" << endl;
        std::cout << "5 - ���� ��������" << endl;

        cin >> TravelAction;
        if (TravelAction == 1)
        {
            std::cout << "�� ����� �����..." << endl;
            randomEV(name);
        }
        else if (TravelAction == 2)
        {
            std::cout << "�� ����� �����..." << endl;
            randomEV(name);
        }
        else if (TravelAction == 3)
        {
            std::cout << "�� ����� ������..." << endl;
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
