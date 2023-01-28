#include <iostream>
#include <fstream>
#include <string>
#include "file_work.h"

using namespace std;

int main()
{
    int mode;
    string text;
    FileWork* file_work = new FileWork();
    file_work->file_path = "file.txt";
    do {
        cout << "Mode: \n1 - read\n2 - write\n3 - append\n->";
        cin >> mode;
        cin.ignore();
        switch (mode)
        {
        case 1: {
            file_work->_open_mode = ios::in;
            text = file_work->readFromFile();
            cout << "Text: " << text << endl;
        }break;
        case 2: {
            cout << "Text: ";
            getline(cin, text);
            file_work->_open_mode = ios::out;
            file_work->writeToFile(text);
        }break;
        case 3: {
            cout << "Text: ";
            getline(cin, text);
            file_work->_open_mode = ios::app;
            file_work->appendToFile(text);
        }break;
        default:
            break;
        }
    } while (true);
    return 0;
}