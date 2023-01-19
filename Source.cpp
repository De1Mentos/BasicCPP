#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream file;
    string text;

    int option;
    int i = 1;
    file.open("Source.cpp", ios::in);
    cin >> option;
    if (option == 1)
    {
        if (file.is_open())
        {
            while (getline(file, text))
            {
                cout << i << "\t| " << text << endl;
                i++;
            }
        }
    }
    else if (option == 2)
    {
        if (file.is_open())
        {
            cin >> text;
            file << text << endl;
            file.close();
        }
    }
    return 0;
}