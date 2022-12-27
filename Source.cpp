#include <iostream>
#include <windows.h>
#include <conio.h>
#include <io.h>
#include <fcntl.h>

using namespace std;

string name;

int points=10;

int С = 5;
int Во = 5;
int Вы = 5;
int И = 5;
int Л = 5;
int У = 5;

int Skillar;

int opcii;

void stats(string name)
{
    while (Skillar != 7)
    {
    system("cls");
    cout << "Очков умения доступно " << points << endl << endl;
    cout << "1.Сила = " << С << endl;
    cout << "2.Восприятие = " << Во << endl;
    cout << "3.Выносливость = " << Вы << endl;
    cout << "4.Интелект = " << И << endl;
    cout << "5.Ловкость = " << Л << endl;
    cout << "6.Удача = " << У << endl << endl;
    cout << "7.Сохранить и выйти из меню" << endl << endl << endl;

    cout << "Введите цифру умения про которое вы хотите узнать или улучшить/ухудшить - ";
    cin >> Skillar;
    system("cls");
    switch (Skillar)
    {
    case 1:
    {
        do
        {
             cout << "Сила, блаблабла" << endl;
       
             cout << "Ваша сила = " << С << endl;
       
             cout << "1 = если хотите потратить очко умение на улучшения силы" << endl;
             cout << "2  = если хотите убрать очко умение с силы" << endl;
             cout << "0  = если вы хотите выйти с меню" << endl;
       
             cin >> opcii;
             if (opcii == 1)
             {
                 if (points > 0 && С <= 10)
                 {
                     points -= 1;
                     С += 1;
                     cout << "Сила улучшена" << endl;
                     _getch();
                     system("cls");
                 }
                 else
                 {
                     cout << "Не достаточно очков умения/Сила улучшена на максимум";
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
        cout << "Ошибка, такого выбора быть не может";
    }break;
    }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Кампания Великого Человека по имени "; cin >> name; cout << name << endl;
    stats(name);
    return 0;
}