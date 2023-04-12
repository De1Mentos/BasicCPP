#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Student
{
    int age;
    int grade;
};

void Studing()
{
    Student s[5];
    for (int i = 0; i < 5; i++)
    {
        s[i].age = 16 + rand() % 3;
        s[i].grade = rand() % 12 + 1;
    }
    for (int j = 0; j < 5; j++)
    {
        cout << "Student " << j + 1 << endl;
        cout << "Age: " << s[j].age << endl;
        cout << "Grade: " << s[j].grade << endl;
        cout << endl;
    }
}

void StudingSort()
{
    Student s[5];
    for (int i = 0; i < 5; i++)
    {
        s[i].age = 16 + rand() % 3;
        s[i].grade = rand() % 12 + 1;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (s[j].grade > s[j + 1].grade)
            {
                Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    for (int j = 0; j < 5; j++)
    {
        cout << "Student " << j + 1 << endl;
        cout << "Age: " << s[j].age << endl;
        cout << "Grade: " << s[j].grade << endl;
        if (s[j].grade > 9)
        {
            cout << "Student " << j + 1 << " is otlichnik" << endl;
        }
        else if (s[j].grade < 3)
        {
            cout << "Student " << j + 1 << " is dvoechnik" << endl;
        }
        else
        {
            cout << "Student " << j + 1 << " is normal" << endl;
        }
        cout << endl;
    }
}

int main()
{
    int a;
    while (true)
    {
        cout << "1 - List " << endl;
        cout << "2 - Sort by Grade " << endl;
        cout << "Enter number to start: ";
        cin >> a;
        if (a == 1)
        {
            Studing();
        }
        else if (a == 2)
        {
            StudingSort();
        }
        else
        {
            cout << "Error, your balls gonna explode in few seconds" << endl;
        }
    }
    return 0;
}