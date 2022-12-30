#include <iostream>
#include <windows.h>
#include <conio.h>
#include <io.h>
#include <fcntl.h>
#include <cstdlib>

using namespace std;

string name = "Одиночка";
int points=10;

int С = 3;
int Во = 3;
int Вы = 3;
int И = 3;
int Л = 3;
int У = 3;
int inv;

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

int Weapon = 0;
int Armor = 0;

int Event;
void randomEV(string name)
{
    Event = rand() % 100;
    cout << Event;
    if (Event >= 92)
    {
        system("cls");
        cout << "Вы нашли переход на следующий этаж!" << endl;
        _getch();
    }
    if (Event <= 20)
    {
        system("cls");
        cout << "Был обнаружен противник!" << endl;
        _getch();
    }
    if (Event >= 20 && Event <= 25)
    {
        system("cls");
        cout << "Стена. Ничего особенного, похоже она кирпичная" << endl;
        _getch();
    }
    if (Event >= 26 && Event <= 30)
    {
        system("cls");
        cout << "Стена. Ничего особенного, похоже она бетонная" << endl;
        _getch();
    }
    if (Event >= 31 && Event <= 50)
    {
        system("cls");
        cout << "Вы продвигаетесь дальше без проишествий" << endl;
        _getch();
    }
    if (Event >= 51 && Event <= 55)
    {
        system("cls");
        cout << "Вы нашли источник воды. Ваше здоровье полностью востановленно" << endl;
        _getch();
    }
    if (Event >= 56 && Event <= 60)
    {
        system("cls");
        cout << "Вы нашли предмет на полу, это был" << endl;
        _getch();
    }
    if (Event >= 61 && Event <= 65)
    {
        system("cls");
        cout << "Вы увидели человека" << endl;
        _getch();
    }
    if (Event >= 66 && Event <= 70)
    {
        system("cls");
        cout << "Закрытая дверь. Можно попытаться сломать силой или же вашей ловкостью" << endl;
        _getch();
        cout << "1 - Попытаться сломать её силой" << endl;
        cout << "2 - Попытаться сломать её ловкостью" << endl;
        cout << "Любое другое число - Оставить дверь в покое (Безсмысленно?)" << endl;
        cin >> PickC;
        if (PickC == 1)
        {
            cout << "Вы пытаетесь сломать её силой..." << endl;
            _getch();
            if (С >= 7)
            {
                cout << "...И вам успешно это удается! За дверью находится... " << endl;
                _getch();
                if (Event <= 13)
                {
                    cout << "Как наростить огромные банки" << endl;
                    С += 1;
                    cout << "Ваша сила теперь ровняется" << С << endl;
                }
                if (Event >= 14 && Event <= 27)
                {
                    cout << "Стрельба, Пушки и оружие" << endl;
                    Во += 1;
                    cout << "Ваше Восприятие теперь ровняется" << Во << endl;
                }
                if (Event >= 28 && Event <= 41)
                {
                    cout << "Как наростить пресс" << endl;
                    Вы += 1;
                    cout << "Ваша выносливость теперь ровняется" << Вы << endl;
                }
                if (Event >= 42 && Event <= 55)
                {
                    cout << "Пособник по разработке ПО" << endl;
                    Вы += 1;
                    cout << "Ваш интелект теперь ровняется" << И << endl;
                }
                if (Event >= 56 && Event <= 69)
                {
                    cout << "Как избежать преступление за убийство? Документальная брошура" << endl;
                    Л += 1;
                    cout << "Ваша ловкость теперь ровняется" << Л << endl;
                }
                if (Event >= 70 && Event <= 83)
                {
                    cout << "Мухлеж в текстовых ММО ДЖИ-РПЖИ" << endl;
                    У += 1;
                    cout << "Ваша удача теперь ровняется" << У << endl;
                }
                if (Event >= 84 && Event <= 100)
                {
                    cout << "Всесторонее саморазивитие" << endl;
                    points += 1;
                    cout << "Вы получили 1 очко улучшения умений!" << endl;
                }
            }
            else
            {
                cout << "...Но это провал, и дверь теперь запечатанна." << endl;
                _getch();
            }
        }
        else if (PickC == 2)
        {

        }
        else
        {
            cout << "Вы просто ушли с обиженным лицом. Мне вас не жаль." << endl;
            _getch();
        }

    }
    if (Event >= 71 && Event <= 75)
    {
        system("cls");
        cout << "Компьютерный терминал, можно попытаться его взломать" << endl;
        _getch();
        cout << "Вы используете свои " << И * 10 + 40 << " IQ что бы взломать его" << endl;
        if (И > 6)
        {
            cout << "Вам удалось сломать компьютер. На нем находился текстовый пособник по... " << endl;
            _getch();
            if (Event <= 13)
            {
                cout << "Как наростить огромные банки" << endl;
                С += 1;
                cout << "Ваша сила теперь ровняется" << С << endl;
            }
            if (Event >= 14 && Event <= 27)
            {
                cout << "Стрельба, Пушки и оружие" << endl;
                Во += 1;
                cout << "Ваше Восприятие теперь ровняется" << Во << endl;
            }
            if (Event >= 28 && Event <= 41)
            {
                cout << "Как наростить пресс" << endl;
                Вы += 1;
                cout << "Ваша выносливость теперь ровняется" << Вы << endl;
            }
            if (Event >= 42 && Event <= 55)
            {
                cout << "Пособник по разработке ПО" << endl;
                Вы += 1;
                cout << "Ваш интелект теперь ровняется" << И << endl;
            }
            if (Event >= 56 && Event <= 69)
            {
                cout << "Как избежать преступление за убийство? Документальная брошура" << endl;
                Л += 1;
                cout << "Ваша ловкость теперь ровняется" << Л << endl;
            }
            if (Event >= 70 && Event <= 83)
            {
                cout << "Мухлеж в текстовых ММО ДЖИ-РПЖИ" << endl;
                У += 1;
                cout << "Ваша удача теперь ровняется" << У << endl;
            }
            if (Event >= 84 && Event <= 100)
            {
                cout << "Всесторонее саморазивитие" << endl;
                points += 1;
                cout << "Вы получили 1 очко улучшения умений!" << endl;
            }
        }
        else if (И <= 6)
        {
            cout << "Безнадежно, вам нужно больше интелекта...";
            _getch();
        }
    }
    if (Event >= 76 && Event <= 80)
    {
        system("cls");
        cout << "Вы увидели выход!.." << endl;
        _getch();
        cout << "Или же это не выход?" << endl;
        _getch();
        cout << "Вы решили использовать ваше восприятие что бы узнать точно..." << endl;
        _getch();
        if (Во >= 7)
        {
            cout << "На самом деле выход! Наконец-то!" << endl;
            _getch();
        }
        else
        {
            cout << "Вам нехватило вашего восприятие (Которое, кстати, на уровне близорукости) что бы определить выход это или нет. Вы решили пойти далее" << endl;
            _getch();
        }
    }
    if (Event >= 76 && Event <= 80)
    {
        system("cls");
        cout << "Интересно, это хоть кто-то играет?" << endl;
        _getch();
    }
    if (Event >= 81 && Event <= 84)
    {
        system("cls");
        cout << "Вы нашли предмет на полу, это был" << endl;
        _getch();
    }
    if (Event >= 85 && Event <= 90)
    {
        system("cls");
        cout << "Ух ты, бетонно-кирпичная стена. Такое не каждый день увидите, сделайте скриншот" << endl;
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
        cout << "Оружие: Руки" << endl;
        cout << "Ближний урон - " << 10 * С / 2 << endl;
        cout << "Дальний урон - " << 0 << endl;
        cout << "Шанс крита - " << 1 + У - 2 << "%" << endl;
        cout << "Особенности:" << endl;
        cout << "Нету" << endl << endl;
    }
    else if (Weapon == 1)
    {
        cout << "Оружие: Копье" << endl;
        cout << "Ближний урон - " << 30 + С << endl;
        cout << "Дальний урон - " << 5 + Вы << endl;
        cout << "Шанс крита - " << 1 + У - 2 << "%" << endl << endl;
        cout << "Особенности:" << endl;
        cout << "Нету" << endl << endl;
    }
    if (Armor == 0)
    {
        cout << "Броня: Трапье" << endl;
        cout << "Защита - " << 0 + Вы << endl;
        cout << "Особенности:" << endl;
        cout << "Дает Силы - 0" << endl;
        cout << "Дает Восприятия - 0" << endl;
        cout << "Дает Выносливости - 0" << endl;
        cout << "Дает Интелекта - 0" << endl;
        cout << "Дает Ловкости - 0" << endl;
        cout << "Дает Удачи - 0" << endl << endl;
    }
    cout << "Выберите действие" << endl;
    cout << "1 - Поменять оружие" << endl;
    cout << "2 - Поменять броню" << endl;
    cout << "3 - Выйти из инвентаря" << endl;
    cin >> opciiINV;
    if (opciiINV == 1)
    {
        do
        {
            system("cls");
            cout << "На данный момент экипированно" << endl;
            if (Weapon == 0)
            {
                cout << "Оружие: Руки" << endl;
                cout << "Ближний урон - " << 10 * С / 0.5 << endl;
                cout << "Дальний урон - " << 0 << endl;
                cout << "Шанс крита - " << 1 + У - 2 << "%" << endl;
                cout << "Особенности:" << endl;
                cout << "Нету" << endl << endl;
            }
            cout << "1 - Поменять оружие на другое" << endl;
            cout << "2 - Выйти из меню" << endl;
            cin >> opciiINV;
            if (opciiINV == 1)
            {
                if (WeaUn0 == 1)
                {
                    cout << "1 - Руки" << endl;
                }
                if (WeaUn0 == 2)
                {
                    cout << "2 - Копье" << endl;
                }
                cout << "99 - Выйти" << endl;
                cin >> WeaPick;
                if (WeaPick == 1 && WeaUn0 == 1)
                {
                    Weapon = 0;
                }
                else if (WeaPick == 1 && WeaUn0 == 0)
                {
                    cout << "Такого оружия у вас нету!";
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

void fight(string name, int Enemie, int С, int Во, int Вы, int И, int Л, int У)
{

}

void stats(string name)
{
    while (Skillar != 7)
    {
    system("cls");
    cout << "Персонаж по имени " << name << endl << endl;
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
             cout << "0  = если вы хотите выйти с меню" << endl;
       
             cin >> opcii;
             if (opcii == 1)
             {
                 if (points > 0 && С <= 9)
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
        do
        {
            cout << "Восприятие, блаблабла" << endl;

            cout << "Ваше Восприятие = " << Во << endl;

            cout << "1 = если хотите потратить очко умение на улучшения восприятия" << endl;
            cout << "0  = если вы хотите выйти с меню" << endl;

            cin >> opcii;
            if (opcii == 1)
            {
                if (points > 0 && Во <= 9)
                {
                    points -= 1;
                    Во += 1;
                    cout << "Восприятие улучшено" << endl;
                    _getch();
                    system("cls");
                }
                else
                {
                    cout << "Не достаточно очков умения/Восприятие улучшено на максимум";
                    _getch();
                }
            }
        } while (opcii == 0);
    }break;
    case 3:
    {
        do
        {
            cout << "Выносливость, блаблабла" << endl;

            cout << "Ваша выносливость = " << Вы << endl;

            cout << "1 = если хотите потратить очко умение на улучшения выносливости" << endl;
            cout << "0  = если вы хотите выйти с меню" << endl;

            cin >> opcii;
            if (opcii == 1)
            {
                if (points > 0 && Вы <= 9)
                {
                    points -= 1;
                    Вы+= 1;
                    cout << "Выносливость улучшена" << endl;
                    _getch();
                    system("cls");
                }
                else
                {
                    cout << "Не достаточно очков умения/Выносливость улучшена на максимум";
                    _getch();
                }
            }
        } while (opcii == 0);
    }break;
    case 4:
    {
        do
        {
            cout << "Интелект, блаблабла" << endl;

            cout << "Ваш Интелект = " << И << endl;

            cout << "1 = если хотите потратить очко умение на улучшение интелекта" << endl;
            cout << "0  = если вы хотите выйти с меню" << endl;

            cin >> opcii;
            if (opcii == 1)
            {
                if (points > 0 && И <= 9)
                {
                    points -= 1;
                    И += 1;
                    cout << "Интелект улучшена" << endl;
                    _getch();
                    system("cls");
                }
                else
                {
                    cout << "Не достаточно очков умения/Интелект улучшен на максимум";
                    _getch();
                }
            }
        } while (opcii == 0);
    }break;
    case 5:
    {
        do
        {
            cout << "Ловкость, блаблабла" << endl;

            cout << "Ваша ловкость = " << Л << endl;

            cout << "1 = если хотите потратить очко умение на улучшение ловкости" << endl;
            cout << "0  = если вы хотите выйти с меню" << endl;

            cin >> opcii;
            if (opcii == 1)
            {
                if (points > 0 && Л <= 9)
                {
                    points -= 1;
                    Л += 1;
                    cout << "Ловкость улучшена" << endl;
                    _getch();
                    system("cls");
                }
                else
                {
                    cout << "Не достаточно очков умения/Ловкость улучшена на максимум";
                    _getch();
                }
            }
        } while (opcii == 0);
    }break;
    case 6:
    {
        do
        {
            cout << "Удача, блаблабла" << endl;

            cout << "Ваша удача = " << У << endl;

            cout << "1 = если хотите потратить очко умение на улучшения удачи" << endl;
            cout << "0  = если вы хотите выйти с меню" << endl;

            cin >> opcii;
            if (opcii == 1)
            {
                if (points > 0 && У <= 9)
                {
                    points -= 1;
                    У += 1;
                    cout << "Удача улучшена" << endl;
                    _getch();
                    system("cls");
                }
                else
                {
                    cout << "Не достаточно очков умения/Удача улучшена на максимум";
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
        cout << "Ошибка, такого выбора быть не может";
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
    cout << "Что вы хотите сделать?" << endl << endl;
    cout << "1 - Пойти прямо" << endl;
    cout << "2 - Пойти влево" << endl;
    cout << "3 - Пойти вправо" << endl;
    cout << "4 - Инвентарь" << endl;
    cout << "5 - Меню прокачки" << endl;

    cin >> TravelAction;
    if (TravelAction == 1)
    {
        cout << "Вы пошли прямо..." << endl;
        randomEV(name);
    }
    else if (TravelAction == 2)
    {
        cout << "Вы пошли влево..." << endl;
        randomEV(name);
    }
    else if (TravelAction == 3)
    {
        cout << "Вы пошли вправо..." << endl;
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
