#include <iostream>
#include <windows.h>
#include <fcntl.h>
#include <conio.h>
#include <io.h>
#include <cstdlib>

using namespace std;

string name = "��������";
int points=10;

int � = 1;
int �� = 1;
int �� = 1;
int � = 1;
int � = 1;
int � = 1;
int inv;

int Turn;
int TurnPick;
int EneHP;
int PlaHP;
int EneD;

int PickC;

int Skillar;

int opcii;
int opciiINV;
int opciiWEA;
int WeaPick;

int WeaUn0 = 1;
int WeaUn1 = 0;
int WeaUn2 = 0;
int WeaUn3 = 0;
int WeaUn4 = 0;
int WeaUn5 = 0;
int WeaUn6 = 0;
int WeaUn7 = 0;
int WeaUn8 = 0;
int WeaUn9 = 0;
int WeaUn10 = 0;

int armUn0 = 1;
int armUn1 = 0;
int armUn2 = 0;
int armUn3 = 0;
int armUn4 = 0;
int armUn5 = 0;
int armUn6 = 0;
int armUn7 = 0;
int armUn8 = 0;
int armUn9 = 0;
int armUn10 = 0;

int MeD;
int RaD;
int Crit;
int PlPt;

int Weapon = 0;
int Armor = 0;

int EXP = 970;
int Level;

int Event;

void Fight(int Event, int �, int ��, int ��, int �, int �, int �, int EneHP, int PlaHP, int Floor, int EXP)
{
        Turn = 1;
        if (Floor == 1)
        {
            std::cout << "����� ���� ���������� ���������, ��������� - ���������." << endl;
            EneHP = (� + �� + �� + � + � + �) * 2 + 40;
            EneD = 20 * Floor / 2 - PlPt / 2;
            _getch();
        }
        else if (Floor == 2)
        {
            std::cout << "����� ���� ���������� ����������� ���-�������!" << endl;
            EneHP = (� + �� + �� + � + � + �) * 2 + 65;
            EneD = 27 * Floor / 2 - PlPt / 2;
            _getch();
        }
        else if (Floor == 3)
        {
            std::cout << "����� ���� ���������� ������������� ����!" << endl;
            EneHP = (� + �� + �� + � + � + �) * 2 + 80;
            EneD = 34 * Floor / 2 - PlPt / 2;
            _getch();
        }
        else if (Floor == 4)
        {
            std::cout << "����� ���� ���������� �������� ������!" << endl;
            EneHP = (� + �� + �� + � + � + �) * 2 + 95;
            EneD = 41 * Floor / 2 - PlPt / 2;
            _getch();
        }
        else if (Floor == 5)
        {
            std::cout << "����� ���� ���������� ������!" << endl;
            EneHP = (� + �� + �� + � + � + �) * 2 + 150;
            EneD = 38 * Floor / 2 - PlPt / 2;
            _getch();
        }
        else if (Floor == 6)
        {
            std::cout << "����� ���� ���������� ���� ������� �����, �� �� ����� ��� �� �� ����� ������!" << endl;
            EneHP = (� + �� + �� + � + � + �) * 2 + 200;
            EneD = 45 * Floor / 2 - PlPt / 2;
            _getch();
        }
        else if (Floor == 7)
        {
            std::cout << "����� ���� ���������� ���� ������� ����� � ������� �����, ����������!" << endl;
            EneHP = (� + �� + �� + � + � + �) * 2 + 260;
            EneD = 52 * Floor / 2 - PlPt / 2;
            _getch();
        }
        else if (Floor == 7)
        {
            std::cout << "����� ���� ���������� ������� �����-������!" << endl;
            EneHP = (� + �� + �� + � + � + �) * 2 + 300;
            EneD = 59 * Floor / 2 - PlPt / 2;
            _getch();
        }
        else if (Floor == 8)
        {
            std::cout << "����� ���� ���������� ������ ����������� �����-������!" << endl;
            EneHP = (� + �� + �� + � + � + �) * 2 + 400;
            EneD = 65 * Floor / 2 - PlPt / 2;
            _getch();
        }
        else if (Floor == 9)
        {
            std::cout << "����� ���� ���������� ������, ����� ������� �����-������!" << endl;
            EneHP = (� + �� + �� + � + � + �) * 2 + 500;
            EneD = 75 * Floor / 2 - PlPt / 2;
            _getch();
        }
        else if (Floor == 10)
        {
            std::cout << "����� ���� ���������� ������!" << endl;
            EneHP = (� + �� + �� + � + � + �) * 2 + 1000;
            EneD = 80 * Floor / 2 - PlPt / 2;
            _getch();
        }
        PlaHP = �� * 4 + 100;
        if (Weapon == 0)
        {
            MeD = 10 * � / 2;
            RaD = 0 * �� / 2;
            Crit = 1 + � - 2;
        }
        else if (Weapon == 1)
        {
            MeD = 20 * � / 2;
            RaD = 5 * �� / 2;
            Crit = 7 + � - 2;
        }
        else if (Weapon == 2)
        {
            MeD = 32 * � / 2;
            RaD = 3 * �� / 2;
            Crit = 5 + � - 2;
        }
        else if (Weapon == 3)
        {
            MeD = 6 * � / 2;
            RaD = 40 * �� / 2;
            Crit = 4 + � - 2;
        }
        else if (Weapon == 4)
        {
            MeD = 45 * � / 2;
            RaD = 17 * �� / 2;
            Crit = 15 + � - 2;
        }
        else if (Weapon == 5)
        {
            MeD = 7 * � / 2;
            RaD = 45 * �� / 2;
            Crit = 2 + � - 2;
        }
        else if (Weapon == 6)
        {
            MeD = 10 * � / 2;
            RaD = 55 * �� / 2;
            Crit = 5 + � - 2;
        }
        else if (Weapon == 7)
        {
            MeD = 60 * � / 2;
            RaD = 0 * �� / 2;
            Crit = 10 + � - 2;
        }
        else if (Weapon == 8)
        {
            MeD = 15 * � / 2;
            RaD = 70 * �� / 2;
            Crit = 7 + � - 2;
        }
        else if (Weapon == 9)
        {
            MeD = 3 * � / 2;
            RaD = 100 * �� / 2;
            Crit = 0 + � - 2;
        }
        else if (Weapon == 10)
        {
            MeD = 5 * � / 2;
            RaD = 130 * �� / 2;
            Crit = 0;
        }
        do
        {
            if (Turn == 1 && PlaHP >= 1)
            {
                system("cls");
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
                    _getch();

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
                    _getch();

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
                    _getch();

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
                if (Event <= 70)
                {
                    std::cout << "��������� ������� ��� " << EneD << " �����." << endl << endl;
                    PlaHP -= EneD;
                    _getch();
                    Turn = 1;
                }
                else if (Event >= 95)
                {
                    std::cout << "��������� ������� ��� " << EneD * 3 << " ������������ �����!" << endl << endl;
                    PlaHP -= EneD;
                    _getch();
                    Turn = 1;
                }
                else
                {
                    std::cout << "��������� ����������, � �������������� " << EneD - Floor / 2 << " ��!" << endl << endl;
                    EneHP += 10 * Floor - �;
                    _getch();
                    Turn = 1;
                }
            }
        } while (EneHP >= 1);
        std::cout << "��������� ����!" << endl;
        _getch();
        EXP += 10 + Floor * 2;
        Event = rand() % 100;
        if (Event >= 50)
        {
            std::cout << "�� ����� ����� ������." << endl;
            if (WeaUn1 != 1)
            {
                WeaUn1 = 1;
            }
            else if (WeaUn2 != 1)
            {
                WeaUn2 = 1;
            }
            else if (WeaUn3 != 1 && Floor >= 2)
            {
                WeaUn3 = 1;
            }
            else if (WeaUn4 != 1 && Floor >= 2)
            {
                WeaUn4 = 1;
            }
            else if (WeaUn5 != 1 && Floor >= 3)
            {
                WeaUn5 = 1;
            }
            else if (WeaUn6 != 1 && Floor >= 4)
            {
                WeaUn6 = 1;
            }
            else if (WeaUn7 != 1 && Floor >= 5)
            {
                WeaUn7 = 1;
            }
            else if (WeaUn8 != 1 && Floor >= 6)
            {
                WeaUn8 = 1;
            }
            else if (WeaUn9 != 1 && Floor >= 6)
            {
                WeaUn9 = 1;
            }
            else if (WeaUn10 != 1 && Floor >= 6)
            {
                WeaUn10 = 1;
            }
        }
        else if (Event <= 51)
        {
            std::cout << "�� ����� ����� �����." << endl;
            if (armUn1 != 1)
            {
                armUn1 = 1;
            }
            else if (armUn2 != 1)
            {
                armUn2 = 1;
            }
            else if (armUn3 != 1 && Floor >= 2)
            {
                armUn3 = 1;
            }
            else if (armUn4 != 1 && Floor >= 2)
            {
                armUn4 = 1;
            }
            else if (armUn5 != 1 && Floor >= 2)
            {
                armUn5 = 1;
            }
            else if (armUn6 != 1 && Floor >= 3)
            {
                armUn6 = 1;
            }
            else if (armUn7 != 1 && Floor >= 4)
            {
                armUn7 = 1;
            }
            else if (armUn8 != 1 && Floor >= 5)
            {
                armUn8 = 1;
            }
            else if (armUn9 != 1 && Floor >= 6)
            {
                armUn9 = 1;
            }
            else if (armUn10 != 1 && Floor >= 7)
            {
                armUn10 = 1;
            }
        else
            {
                std::cout << "����� �������������� ����!" << endl;
                EXP += 20 + Floor * 2;
            }
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
        Fight(Event, �, ��, ��, �, �, �, EneHP, PlaHP, Floor, EXP);
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
        std::cout << "��� ��������� ���������!" << endl;
        _getch();
        Fight(Event, �, ��, ��, �, �, �, EneHP, PlaHP, Floor, EXP);
    }
    if (Event >= 56 && Event <= 60)
    {
        system("cls");
        std::cout << "��� ��������� ���������!" << endl;
        _getch();
        Fight(Event, �, ��, ��, �, �, �, EneHP, PlaHP, Floor, EXP);
    }
    if (Event >= 61 && Event <= 65)
    {
        system("cls");
        std::cout << "�� ������������� ������ ��� �����������" << endl;
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
    if (Event >= 81 && Event <= 84)
    {
        system("cls");
        std::cout << "�� ����� ������� �� ��������� ����!" << endl;
        _getch();
        Floor += 1;
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
        }
        else if (Weapon == 1)
        {
            MeD = 20 * � / 2;
            RaD = 5 * �� / 2;
            Crit = 7 + � - 2;

            cout << "������: ������ �����" << endl;
            cout << "������� ���� - " << MeD << endl;
            cout << "������� ���� - " << RaD << endl;
            cout << "���� ����� - " << Crit << "%" << endl;
        }
        else if (Weapon == 2)
        {
            MeD = 32 * � / 2;
            RaD = 3 * �� / 2;
            Crit = 5 + � - 2;

            cout << "������: ����" << endl;
            cout << "������� ���� - " << MeD << endl;
            cout << "������� ���� - " << RaD << endl;
            cout << "���� ����� - " << Crit << "%" << endl;
        }
        else if (Weapon == 3)
        {
            MeD = 6 * � / 2;
            RaD = 40 * �� / 2;
            Crit = 4 + � - 2;

            cout << "������: ������ ���������" << endl;
            cout << "������� ���� - " << MeD << endl;
            cout << "������� ���� - " << RaD << endl;
            cout << "���� ����� - " << Crit << "%" << endl;
        }
        else if (Weapon == 4)
        {
            MeD = 45 * � / 2;
            RaD = 17 * �� / 2;
            Crit = 15 + � - 2;

            cout << "������: �������" << endl;
            cout << "������� ���� - " << MeD << endl;
            cout << "������� ���� - " << RaD << endl;
            cout << "���� ����� - " << Crit << "%" << endl;
        }
        else if (Weapon == 5)
        {
            MeD = 7 * � / 2;
            RaD = 45 * �� / 2;
            Crit = 2 + � - 2;

            cout << "������: ��������-������" << endl;
            cout << "������� ���� - " << MeD << endl;
            cout << "������� ���� - " << RaD << endl;
            cout << "���� ����� - " << Crit << "%" << endl;
        }
        else if (Weapon == 6)
        {
            MeD = 10 * � / 2;
            RaD = 55 * �� / 2;
            Crit = 5 + � - 2;

            cout << "������: ��������" << endl;
            cout << "������� ���� - " << MeD << endl;
            cout << "������� ���� - " << RaD << endl;
            cout << "���� ����� - " << Crit << "%" << endl;
        }
        else if (Weapon == 7)
        {
            MeD = 60 * � / 2;
            RaD = 0 * �� / 2;
            Crit = 10 + � - 2;

            cout << "������: ����-��������" << endl;
            cout << "������� ���� - " << MeD << endl;
            cout << "������� ���� - " << RaD << endl;
            cout << "���� ����� - " << Crit << "%" << endl;
        }
        else if (Weapon == 8)
        {
            MeD = 15 * � / 2;
            RaD = 70 * �� / 2;
            Crit = 7 + � - 2;

            cout << "������: �������" << endl;
            cout << "������� ���� - " << MeD << endl;
            cout << "������� ���� - " << RaD << endl;
            cout << "���� ����� - " << Crit << "%" << endl;
        }
        else if (Weapon == 9)
        {
            MeD = 3 * � / 2;
            RaD = 100 * �� / 2;
            Crit = 0 + � - 2;

            cout << "������: �������" << endl;
            cout << "������� ���� - " << MeD << endl;
            cout << "������� ���� - " << RaD << endl;
            cout << "���� ����� - " << Crit << "%" << endl;
        }
        else if (Weapon == 10)
        {
            MeD = 5 * � / 2;
            RaD = 130 * �� / 2;
            Crit = 0;

            cout << "������: '�������'" << endl;
            cout << "������� ���� - " << MeD << endl;
            cout << "������� ���� - " << RaD << endl;
            cout << "���� ����� - " << Crit << "%" << endl; std::cout << "���� ����� - " << 1 + � - 2 << "%" << endl << endl;
        }
        if (Armor == 0)
        {
            PlPt = 0 * �� / 2;

            std::cout << "�����: ������" << endl;
            std::cout << "������ - " << PlPt << endl;
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
                }
                if (Weapon == 1)
                {
                    MeD = 20 * � / 2;
                    RaD = 5 * �� / 2;
                    Crit = 7 + � - 2;

                    cout << "������: ������ �����" << endl;
                    cout << "������� ���� - " << MeD << endl;
                    cout << "������� ���� - " << RaD << endl;
                    cout << "���� ����� - " << Crit << "%" << endl;
                }
                if (Weapon == 2)
                {
                    MeD = 32 * � / 2;
                    RaD = 3 * �� / 2;
                    Crit = 5 + � - 2;

                    cout << "������: ����" << endl;
                    cout << "������� ���� - " << MeD << endl;
                    cout << "������� ���� - " << RaD << endl;
                    cout << "���� ����� - " << Crit << "%" << endl;
                }
                if (Weapon == 3)
                {
                    MeD = 6 * � / 2;
                    RaD = 40 * �� / 2;
                    Crit = 4 + � - 2;

                    cout << "������: ������ ���������" << endl;
                    cout << "������� ���� - " << MeD << endl;
                    cout << "������� ���� - " << RaD << endl;
                    cout << "���� ����� - " << Crit << "%" << endl;
                }
                if (Weapon == 4)
                {
                    MeD = 45 * � / 2;
                    RaD = 17 * �� / 2;
                    Crit = 15 + � - 2;

                    cout << "������: �������" << endl;
                    cout << "������� ���� - " << MeD << endl;
                    cout << "������� ���� - " << RaD << endl;
                    cout << "���� ����� - " << Crit << "%" << endl;
                }
                if (Weapon == 5)
                {
                    MeD = 7 * � / 2;
                    RaD = 45 * �� / 2;
                    Crit = 2 + � - 2;

                    cout << "������: ��������-������" << endl;
                    cout << "������� ���� - " << MeD << endl;
                    cout << "������� ���� - " << RaD << endl;
                    cout << "���� ����� - " << Crit << "%" << endl;
                }
                if (Weapon == 6)
                {
                    MeD = 10 * � / 2;
                    RaD = 55 * �� / 2;
                    Crit = 5 + � - 2;

                    cout << "������: ��������" << endl;
                    cout << "������� ���� - " << MeD << endl;
                    cout << "������� ���� - " << RaD << endl;
                    cout << "���� ����� - " << Crit << "%" << endl;
                }
                if (Weapon == 7)
                {
                    MeD = 60 * � / 2;
                    RaD = 0 * �� / 2;
                    Crit = 10 + � - 2;

                    cout << "������: ����-��������" << endl;
                    cout << "������� ���� - " << MeD << endl;
                    cout << "������� ���� - " << RaD << endl;
                    cout << "���� ����� - " << Crit << "%" << endl;
                }
                if (Weapon == 8)
                {
                    MeD = 15 * � / 2;
                    RaD = 70 * �� / 2;
                    Crit = 7 + � - 2;

                    cout << "������: �������" << endl;
                    cout << "������� ���� - " << MeD << endl;
                    cout << "������� ���� - " << RaD << endl;
                    cout << "���� ����� - " << Crit << "%" << endl;
                }
                if (Weapon == 9)
                {
                    MeD = 3 * � / 2;
                    RaD = 100 * �� / 2;
                    Crit = 0 + � - 2;

                    cout << "������: �������" << endl;
                    cout << "������� ���� - " << MeD << endl;
                    cout << "������� ���� - " << RaD << endl;
                    cout << "���� ����� - " << Crit << "%" << endl;
                }
                if (Weapon == 10)
                {
                    MeD = 5 * � / 2;
                    RaD = 130 * �� / 2;
                    Crit = 0;

                    cout << "������: '�������'" << endl;
                    cout << "������� ���� - " << MeD << endl;
                    cout << "������� ���� - " << RaD << endl;
                    cout << "���� ����� - " << Crit << "%" << endl;
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
                    if (WeaUn1 == 1)
                    {
                        std::cout << "2 - ������ �����" << endl;
                    }
                    if (WeaUn2 == 1)
                    {
                        std::cout << "3 - ����" << endl;
                    }
                    if (WeaUn3 == 1)
                    {
                        std::cout << "4 - ������ ���������" << endl;
                    }
                    if (WeaUn4 == 1)
                    {
                        std::cout << "5 - �������" << endl;
                    }
                    if (WeaUn5 == 1)
                    {
                        std::cout << "6 - ��������-������" << endl;
                    }
                    if (WeaUn6 == 1)
                    {
                        std::cout << "7 - ��������" << endl;
                    }
                    if (WeaUn7 == 1)
                    {
                        std::cout << "8 - ����-��������" << endl;
                    }
                    if (WeaUn8 == 1)
                    {
                        std::cout << "9 - �������" << endl;
                    }
                    if (WeaUn9 == 1)
                    {
                        std::cout << "10 - �������" << endl;
                    }
                    if (WeaUn10 == 1)
                    {
                        std::cout << "11 - '�������'" << endl;
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
                    else if (WeaPick == 2 && WeaUn1 == 1)
                    {
                        Weapon = 1;
                    }
                    else if (WeaPick == 2 && WeaUn1 == 0)
                    {
                        std::cout << "������ ������ � ��� ����!";
                    }
                    else if (WeaPick == 3 && WeaUn2 == 1)
                    {
                        Weapon = 3;
                    }
                    else if (WeaPick == 3 && WeaUn2 == 0)
                    {
                        std::cout << "������ ������ � ��� ����!";
                    }
                    else if (WeaPick == 4 && WeaUn3 == 1)
                    {
                        Weapon = 3;
                    }
                    else if (WeaPick == 4 && WeaUn3 == 0)
                    {
                        std::cout << "������ ������ � ��� ����!";
                    }
                    else if (WeaPick == 5 && WeaUn4 == 1)
                    {
                        Weapon = 4;
                    }
                    else if (WeaPick == 5 && WeaUn4 == 0)
                    {
                        std::cout << "������ ������ � ��� ����!";
                    }
                    else if (WeaPick == 6 && WeaUn5 == 1)
                    {
                        Weapon = 5;
                    }
                    else if (WeaPick == 6 && WeaUn5 == 0)
                    {
                        std::cout << "������ ������ � ��� ����!";
                    }
                    else if (WeaPick == 7 && WeaUn6 == 1)
                    {
                        Weapon = 6;
                    }
                    else if (WeaPick == 7 && WeaUn6 == 0)
                    {
                        std::cout << "������ ������ � ��� ����!";
                    }
                    else if (WeaPick == 8 && WeaUn7 == 1)
                    {
                        Weapon = 7;
                    }
                    else if (WeaPick == 8 && WeaUn7 == 0)
                    {
                        std::cout << "������ ������ � ��� ����!";
                    }
                    else if (WeaPick == 9 && WeaUn8 == 1)
                    {
                        Weapon = 8;
                    }
                    else if (WeaPick == 9 && WeaUn8 == 0)
                    {
                        std::cout << "������ ������ � ��� ����!";
                    }
                    else if (WeaPick == 10 && WeaUn9 == 1)
                    {
                        Weapon = 9;
                    }
                    else if (WeaPick == 10 && WeaUn9 == 0)
                    {
                        std::cout << "������ ������ � ��� ����!";
                    }
                    else if (WeaPick == 11 && WeaUn10 == 1)
                    {
                        Weapon = 10;
                    }
                    else if (WeaPick == 11 && WeaUn10 == 0)
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
            std::cout << "������� ����. �� ��������� ������� ���� ���������� �� �����. ";
        }
        else if (Floor == 8)
        {
            std::cout << "������ ����. ����������� ����������. ";
        }
        else if (Floor == 9)
        {
            std::cout << "������� ����. � ��� ���������� �������, ��� �� ��������� ����� ��� ���� ��������� �����... ";
        }
        else if (Floor == 10)
        {
            std::cout << "����� ������ ����������� ������";
            _getch();
            Fight(Event, �, ��, ��, �, �, �, EneHP, PlaHP, Floor, EXP);          
        }
        if (EXP == 1000)
        {
            std::cout << "������� �������!" << endl;
            points += 1;
            Level += 1;
            EXP -= (70 + Level * 12);
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
