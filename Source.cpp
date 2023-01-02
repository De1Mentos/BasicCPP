#include <iostream>
#include <windows.h>
#include <fcntl.h>
#include <conio.h>
#include <io.h>
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

void Fight(int Event, int С, int Во, int Вы, int И, int Л, int У, int EneHP, int PlaHP, int Floor)
{
    if (Floor == 1)
    {
        Turn = 1;
        std::cout << "Перед вами появляется маленький, противник - Кротокрыс.";
        EneHP = (С + Во + Вы + И + Л + У) * 2 + 40;
        PlaHP = Вы * 4 + 100;
        do
        {
            if (Turn == 1 && PlaHP >= 1)
            {
                std::cout << "Здоровье игрока = " << PlaHP << endl;
                std::cout << "Здоровье противника = " << EneHP << endl << endl;
                std::cout << "Что вы ходите сделать?" << endl << endl;
                std::cout << "1 - Атаковать в близи" << endl;
                std::cout << "2 - Атаковать из далека" << endl;
                std::cout << "3 - Защищаться" << endl;
                std::cout << "4 - Незаметно убить" << endl;
                cin >> TurnPick;
                if (TurnPick == 1)
                {
                    std::cout << "Вы атаковали противника вблизи!" << endl;
                    _getch();
                    std::cout << "Нанесено ";
                    Event = rand() % 100;
                    if (Event + Crit >= 100)
                    {
                        std::cout << MeD * 3 << "Критического";
                        EneHP -= MeD * 3;
                    }
                    else
                    {
                        std::cout << MeD;
                        EneHP -= MeD;
                    }
                    std::cout << " Урона противнику!" << endl;

                    Turn = 0;
                }
                else if (TurnPick == 2)
                {
                    std::cout << "Вы атаковали противника издалека!" << endl;
                    _getch();
                    std::cout << "Нанесено ";
                    Event = rand() % 100;
                    if (Event + Crit >= 100)
                    {
                        std::cout << RaD * 3 << "Критического";
                        EneHP -= RaD * 3;
                    }
                    else
                    {
                        std::cout << RaD;
                        EneHP -= RaD;
                    }
                    std::cout << " Урона противнику!" << endl;

                    Turn = 0;
                }
                else if (TurnPick == 3)
                {
                    std::cout << "Вы защищаетесь!" << endl;
                    _getch();
                    Event = rand() % 100;
                    std::cout << "Востановленно " << Event / 10 * (Вы - 2) + У << " ХП!";
                    PlaHP += Event / 10 * Вы;

                    Turn = 0;
                }
                else if (TurnPick == 4)
                {
                    std::cout << "Вы пытаетесь незаметно убить противника!" << endl;
                    _getch();
                    Event = rand() % 100;
                    if (Event / 5 * Л - EneHP / 3 >= 100)
                    {
                        std::cout << "Вам удалось его незаметно убить!" << endl;
                        EneHP = 0;
                    }
                    else
                    {
                        std::cout << "Не удалось, попробуйте ослабить противника." << endl;
                    }
                    Turn = 0;
                }
                else
                {
                    std::cout << "Такой опции нету!";
                }
            }
            else if (Turn == 1 && PlaHP >= 1)
            {
                std::cout << "Вы умерли, и вроде бы, я должен начать игру с начала, но я дам вам поблажку - Востановленно 100 ХП" << endl;
                PlaHP = +100;

                Turn = 0;
            }
            else if (Turn == 0)
            {
                Event = rand() % 100;
                if (Event >= 70)
                {
                    std::cout << "Противник наносит вам " << 20 * Floor / 2 - PlPt / 2 << " Урона!" << endl;
                    PlaHP -= 20 * Floor / 2 - PlPt / 2;
                }
                else if (Event <= 95)
                {
                    std::cout << "Противник наносит вам " << 2 * 20 * Floor / 2 - PlPt / 2 << " Критического Урона!" << endl;
                    PlaHP -= 2 * 20 * Floor / 2 - PlPt / 2;
                }
                else
                {
                    std::cout << "Противник защищается, и востанавливает " << 10 * Floor - У << " ХП!" << endl;
                    EneHP += 10 * Floor - У;
                }
            }
        } while (EneHP <= 1);
        std::cout << "Противник умер!" << endl;
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
        std::cout << "Вы нашли переход на следующий этаж!" << endl;
        _getch();
        Floor += 1;
    }
    if (Event <= 20)
    {
        system("cls");
        std::cout << "Был обнаружен противник!" << endl;
        _getch();
        Fight(Event, С, Во, Вы, И, Л, У, EneHP, PlaHP, Floor);
    }
    if (Event >= 20 && Event <= 25)
    {
        system("cls");
        std::cout << "Стена. Ничего особенного, похоже она кирпичная" << endl;
        _getch();
    }
    if (Event >= 26 && Event <= 30)
    {
        system("cls");
        std::cout << "Стена. Ничего особенного, похоже она бетонная" << endl;
        _getch();
    }
    if (Event >= 31 && Event <= 50)
    {
        system("cls");
        std::cout << "Вы продвигаетесь дальше без проишествий" << endl;
        _getch();
    }
    if (Event >= 51 && Event <= 55)
    {
        system("cls");
        std::cout << "Вы нашли источник воды. Ваше здоровье полностью востановленно" << endl;
        _getch();
    }
    if (Event >= 56 && Event <= 60)
    {
        system("cls");
        std::cout << "Вы нашли предмет на полу, это был" << endl;
        _getch();
    }
    if (Event >= 61 && Event <= 65)
    {
        system("cls");
        std::cout << "Вы увидели человека" << endl;
        _getch();
    }
    if (Event >= 66 && Event <= 70)
    {
        system("cls");
        std::cout << "Закрытая дверь. Можно попытаться сломать силой или же вашей ловкостью" << endl;
        _getch();
        std::cout << "1 - Попытаться сломать её силой" << endl;
        std::cout << "2 - Попытаться сломать её ловкостью" << endl;
        std::cout << "Любое другое число - Оставить дверь в покое (Безсмысленно?)" << endl;
        cin >> PickC;
        if (PickC == 1)
        {
            std::cout << "Вы пытаетесь сломать её силой..." << endl;
            _getch();
            if (С >= 7)
            {
                std::cout << "...И вам успешно это удается! За дверью находится... " << endl;
                _getch();
                if (Event <= 13)
                {
                    std::cout << "Как наростить огромные банки" << endl;
                    С += 1;
                    std::cout << "Ваша сила теперь ровняется" << С << endl;
                }
                if (Event >= 14 && Event <= 27)
                {
                    std::cout << "Стрельба, Пушки и оружие" << endl;
                    Во += 1;
                    std::cout << "Ваше Восприятие теперь ровняется" << Во << endl;
                }
                if (Event >= 28 && Event <= 41)
                {
                    std::cout << "Как наростить пресс" << endl;
                    Вы += 1;
                    std::cout << "Ваша выносливость теперь ровняется" << Вы << endl;
                }
                if (Event >= 42 && Event <= 55)
                {
                    std::cout << "Пособник по разработке ПО" << endl;
                    Вы += 1;
                    std::cout << "Ваш интелект теперь ровняется" << И << endl;
                }
                if (Event >= 56 && Event <= 69)
                {
                    std::cout << "Как избежать преступление за убийство? Документальная брошура" << endl;
                    Л += 1;
                    std::cout << "Ваша ловкость теперь ровняется" << Л << endl;
                }
                if (Event >= 70 && Event <= 83)
                {
                    std::cout << "Мухлеж в текстовых ММО ДЖИ-РПЖИ" << endl;
                    У += 1;
                    std::cout << "Ваша удача теперь ровняется" << У << endl;
                }
                if (Event >= 84 && Event <= 100)
                {
                    std::cout << "Всесторонее саморазивитие" << endl;
                    points += 1;
                    std::cout << "Вы получили 1 очко улучшения умений!" << endl;
                }
            }
            else
            {
                std::cout << "...Но это провал, и дверь теперь запечатанна." << endl;
                _getch();
            }
        }
        else if (PickC == 2)
        {
            std::cout << "Вы пытаетесь сломать её отмычкой..." << endl;
            _getch();
            if (Л >= 7)
            {
                std::cout << "...И вам успешно это удается! За дверью находится... " << endl;
                _getch();
                if (Event <= 13)
                {
                    std::cout << "Как наростить огромные банки" << endl;
                    С += 1;
                    std::cout << "Ваша сила теперь ровняется" << С << endl;
                }
                if (Event >= 14 && Event <= 27)
                {
                    std::cout << "Стрельба, Пушки и оружие" << endl;
                    Во += 1;
                    std::cout << "Ваше Восприятие теперь ровняется" << Во << endl;
                }
                if (Event >= 28 && Event <= 41)
                {
                    std::cout << "Как наростить пресс" << endl;
                    Вы += 1;
                    std::cout << "Ваша выносливость теперь ровняется" << Вы << endl;
                }
                if (Event >= 42 && Event <= 55)
                {
                    std::cout << "Пособник по разработке ПО" << endl;
                    Вы += 1;
                    std::cout << "Ваш интелект теперь ровняется" << И << endl;
                }
                if (Event >= 56 && Event <= 69)
                {
                    std::cout << "Как избежать преступление за убийство? Документальная брошура" << endl;
                    Л += 1;
                    std::cout << "Ваша ловкость теперь ровняется" << Л << endl;
                }
                if (Event >= 70 && Event <= 83)
                {
                    std::cout << "Мухлеж в текстовых ММО ДЖИ-РПЖИ" << endl;
                    У += 1;
                    std::cout << "Ваша удача теперь ровняется" << У << endl;
                }
                if (Event >= 84 && Event <= 100)
                {
                    std::cout << "Всесторонее саморазивитие" << endl;
                    points += 1;
                    std::cout << "Вы получили 1 очко улучшения умений!" << endl;
                }
            }
            else
            {
                std::cout << "...Но это провал, и дверь теперь запечатанна." << endl;
                _getch();
            }
        }
        else
        {
        std::cout << "Вы просто ушли с обиженным лицом. Мне вас не жаль." << endl;
            _getch();
        }

    }
    if (Event >= 71 && Event <= 75)
    {
        system("cls");
        std::cout << "Компьютерный терминал, можно попытаться его взломать" << endl;
        _getch();
        std::cout << "Вы используете свои " << И * 10 + 40 << " IQ что бы взломать его" << endl;
        if (И > 6)
        {
            std::cout << "Вам удалось сломать компьютер. На нем находился текстовый пособник по... " << endl;
            _getch();
            if (Event <= 13)
            {
                std::cout << "Как наростить огромные банки" << endl;
                С += 1;
                std::cout << "Ваша сила теперь ровняется" << С << endl;
            }
            if (Event >= 14 && Event <= 27)
            {
                std::cout << "Стрельба, Пушки и оружие" << endl;
                Во += 1;
                std::cout << "Ваше Восприятие теперь ровняется" << Во << endl;
            }
            if (Event >= 28 && Event <= 41)
            {
                std::cout << "Как наростить пресс" << endl;
                Вы += 1;
                std::cout << "Ваша выносливость теперь ровняется" << Вы << endl;
            }
            if (Event >= 42 && Event <= 55)
            {
                std::cout << "Пособник по разработке ПО" << endl;
                Вы += 1;
                std::cout << "Ваш интелект теперь ровняется" << И << endl;
            }
            if (Event >= 56 && Event <= 69)
            {
                std::cout << "Как избежать преступление за убийство? Документальная брошура" << endl;
                Л += 1;
                std::cout << "Ваша ловкость теперь ровняется" << Л << endl;
            }
            if (Event >= 70 && Event <= 83)
            {
                std::cout << "Мухлеж в текстовых ММО ДЖИ-РПЖИ" << endl;
                У += 1;
                std::cout << "Ваша удача теперь ровняется" << У << endl;
            }
            if (Event >= 84 && Event <= 100)
            {
                std::cout << "Всесторонее саморазивитие" << endl;
                points += 1;
                std::cout << "Вы получили 1 очко улучшения умений!" << endl;
            }
        }
        else if (И <= 6)
        {
            std::cout << "Безнадежно, вам нужно больше интелекта...";
            _getch();
        }
    }
    if (Event >= 76 && Event <= 80)
    {
        system("cls");
        std::cout << "Вы увидели выход!.." << endl;
        _getch();
        std::cout << "Или же это не выход?" << endl;
        _getch();
        std::cout << "Вы решили использовать ваше восприятие что бы узнать точно..." << endl;
        _getch();
        if (Во >= 7)
        {
            std::cout << "На самом деле выход! Наконец-то!" << endl;
            Floor += 1;
            _getch();
        }
        else
        {
            std::cout << "Вам нехватило вашего восприятие (Которое, кстати, на уровне близорукости) что бы определить выход это или нет. Вы решили пойти далее" << endl;
            _getch();
        }
    }
    if (Event >= 76 && Event <= 80)
    {
        system("cls");
        std::cout << "Интересно, это хоть кто-то играет?" << endl;
        _getch();
    }
    if (Event >= 81 && Event <= 84)
    {
        system("cls");
        std::cout << "Вы нашли предмет на полу, это был" << endl;
        _getch();
    }
    if (Event >= 85 && Event <= 90)
    {
        system("cls");
        std::cout << "Ух ты, бетонно-кирпичная стена. Такое не каждый день увидите, сделайте скриншот" << endl;
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
            MeD = 10 * С / 2;
            RaD = 0 * Во / 2;
            Crit = 1 + У - 2;

            std::cout << "Оружие: Руки" << endl;
            std::cout << "Ближний урон - " << MeD << endl;
            std::cout << "Дальний урон - " << RaD << endl;
            std::cout << "Шанс крита - " << Crit << "%" << endl;
            std::cout << "Особенности:" << endl;
            std::cout << "Нету" << endl << endl;
        }
        else if (Weapon == 1)
        {
           std::cout << "Оружие: Копье" << endl;
           std::cout << "Ближний урон - " << 30 + С / 2 << endl;
           std::cout << "Дальний урон - " << 5 * Во / 2 << endl;
           std::cout << "Шанс крита - " << 1 + У - 2 << "%" << endl << endl;
           std::cout << "Особенности:" << endl;
           std::cout << "Нету" << endl << endl;
        }
        if (Armor == 0)
        {
            PlPt = 0 * Вы / 2;

            std::cout << "Броня: Трапье" << endl;
            std::cout << "Защита - " << PlPt << endl;
            std::cout << "Особенности:" << endl;
            std::cout << "Нету" << endl;
        }
        std::cout << "Выберите действие" << endl;
        std::cout << "1 - Поменять оружие" << endl;
        std::cout << "2 - Поменять броню" << endl;
        std::cout << "3 - Выйти из инвентаря" << endl;
        cin >> opciiINV;
        if (opciiINV == 1)
        {
            do
            {
                system("cls");
                std::cout << "На данный момент экипированно" << endl;
                if (Weapon == 0)
                {
                    MeD = 10 * С / 2;
                    RaD = 0 * Во / 2;
                    Crit = 1 + У - 2;

                    std::cout << "Оружие: Руки" << endl;
                    std::cout << "Ближний урон - " << MeD << endl;
                    std::cout << "Дальний урон - " << RaD << endl;
                    std::cout << "Шанс крита - " << Crit << "%" << endl;
                    std::cout << "Особенности:" << endl;
                    std::cout << "Нету" << endl << endl;
                }
                std::cout << "1 - Поменять оружие на другое" << endl;
                std::cout << "2 - Выйти из меню" << endl;
                cin >> opciiINV;
                if (opciiINV == 1)
                {
                    if (WeaUn0 == 1)
                    {
                        std::cout << "1 - Руки" << endl;
                    }
                    if (WeaUn0 == 2)
                    {
                        std::cout << "2 - Копье" << endl;
                    }
                    std::cout << "99 - Выйти" << endl;
                    cin >> WeaPick;
                    if (WeaPick == 1 && WeaUn0 == 1)
                    {
                        Weapon = 0;
                    }
                    else if (WeaPick == 1 && WeaUn0 == 0)
                    {
                        std::cout << "Такого оружия у вас нету!";
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
            PlPt = 0 * Вы / 2;

            std::cout << "Броня: Трапье" << endl;
            std::cout << "Защита - " << PlPt << endl;
            std::cout << "Особенности:" << endl;
            std::cout << "Нету" << endl;
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
        std::cout << "Персонаж по имени " << name << endl << endl;
        std::cout << "Очков умения доступно " << points << endl << endl;
        std::cout << "1.Сила = " << С << endl;
        std::cout << "2.Восприятие = " << Во << endl;
        std::cout << "3.Выносливость = " << Вы << endl;
        std::cout << "4.Интелект = " << И << endl;
        std::cout << "5.Ловкость = " << Л << endl;
        std::cout << "6.Удача = " << У << endl << endl;
        std::cout << "7.Сохранить и выйти из меню" << endl << endl << endl;

        std::cout << "Введите цифру умения про которое вы хотите узнать или улучшить/ухудшить - ";
        cin >> Skillar;
        system("cls");
        switch (Skillar)
        {
        case 1:
        {
            do
            {
                std::cout << "Сила - Увеличивает ваш наносимый урон ближним оружием." << endl;

                std::cout << "Ваша сила = " << С << endl;

                std::cout << "1 = если хотите потратить очко умение на улучшения силы" << endl;
                std::cout << "0  = если вы хотите выйти с меню" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && С <= 9)
                    {
                        points -= 1;
                        С += 1;
                        std::cout << "Сила улучшена" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        std::cout << "Не достаточно очков умения/Сила улучшена на максимум";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 2:
        {
            do
            {
                std::cout << "Восприятие, Улучшает вашу меткость" << endl;

                std::cout << "Ваше Восприятие = " << Во << endl;

                std::cout << "1 = если хотите потратить очко умение на улучшения восприятия" << endl;
                std::cout << "0  = если вы хотите выйти с меню" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && Во <= 9)
                    {
                        points -= 1;
                        Во += 1;
                        std::cout << "Восприятие улучшено" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        std::cout << "Не достаточно очков умения/Восприятие улучшено на максимум";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 3:
        {
            do
            {
                std::cout << "Выносливость, Увеличивает ваше максимальное здоровье и броню" << endl;

                std::cout << "Ваша выносливость = " << Вы << endl;

                std::cout << "1 = если хотите потратить очко умение на улучшения выносливости" << endl;
                std::cout << "0  = если вы хотите выйти с меню" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && Вы <= 9)
                    {
                        points -= 1;
                        Вы += 1;
                        std::cout << "Выносливость улучшена" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        std::cout << "Не достаточно очков умения/Выносливость улучшена на максимум";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 4:
        {
            do
            {
                std::cout << "Интелект, больше опыта за действия" << endl;

                std::cout << "Ваш Интелект = " << И << endl;

                std::cout << "1 = если хотите потратить очко умение на улучшение интелекта" << endl;
                std::cout << "0  = если вы хотите выйти с меню" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && И <= 9)
                    {
                        points -= 1;
                        И += 1;
                        std::cout << "Интелект улучшена" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        std::cout << "Не достаточно очков умения/Интелект улучшен на максимум";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 5:
        {
            do
            {
                std::cout << "Ловкость, шанс увернуться от атаки или сбежать с боя" << endl;

                std::cout << "Ваша ловкость = " << Л << endl;

                std::cout << "1 = если хотите потратить очко умение на улучшение ловкости" << endl;
                std::cout << "0  = если вы хотите выйти с меню" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && Л <= 9)
                    {
                        points -= 1;
                        Л += 1;
                        std::cout << "Ловкость улучшена" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        std::cout << "Не достаточно очков умения/Ловкость улучшена на максимум";
                        _getch();
                    }
                }
            } while (opcii == 0);
        }break;
        case 6:
        {
            do
            {
                std::cout << "Удача, увеличивает шанс критического попадание и шанс выбить редкий предмет" << endl;

                std::cout << "Ваша удача = " << У << endl;

                std::cout << "1 = если хотите потратить очко умение на улучшения удачи" << endl;
                std::cout << "0  = если вы хотите выйти с меню" << endl;

                cin >> opcii;
                if (opcii == 1)
                {
                    if (points > 0 && У <= 9)
                    {
                        points -= 1;
                        У += 1;
                        std::cout << "Удача улучшена" << endl;
                        _getch();
                        system("cls");
                    }
                    else
                    {
                        std::cout << "Не достаточно очков умения/Удача улучшена на максимум";
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
            std::cout << "Ошибка, такого выбора быть не может";
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
            std::cout << "Первый этаж многоэтажки 'Commonwealth'. Интересно, как далеко вам удастся пройти? ";
        }
        else if (Floor == 2)
        {
            std::cout << "Второй этаж. Это уже что-то. ";
        }
        else if (Floor == 3)
        {
            std::cout << "Третий этаж. На удивление, не все могут дойти к нему! ";
        }
        else if (Floor == 4)
        {
            std::cout << "Четвертый этаж. Местные дикари начинают вас узнавать. ";
        }
        else if (Floor == 5)
        {
            std::cout << "Пятый этаж, половина. Тут даже воздух качется чище... ";
        }
        else if (Floor == 6)
        {
            std::cout << "Шестой этаж. Чувствуется достижение. ";
        }
        else if (Floor == 7)
        {

        }
        else if (Floor == 8)
        {

        }
        else if (Floor == 9)
        {
            std::cout << "Девятый этаж. У вас появляется чувство, что на следуйщим этаже вас ждет финальная битва... ";
        }
        else if (Floor == 10)
        {

        }
        std::cout << "Что вы хотите сделать?" << endl << endl;
        std::cout << "1 - Пойти прямо" << endl;
        std::cout << "2 - Пойти влево" << endl;
        std::cout << "3 - Пойти вправо" << endl;
        std::cout << "4 - Инвентарь" << endl;
        std::cout << "5 - Меню прокачки" << endl;

        cin >> TravelAction;
        if (TravelAction == 1)
        {
            std::cout << "Вы пошли прямо..." << endl;
            randomEV(name);
        }
        else if (TravelAction == 2)
        {
            std::cout << "Вы пошли влево..." << endl;
            randomEV(name);
        }
        else if (TravelAction == 3)
        {
            std::cout << "Вы пошли вправо..." << endl;
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
