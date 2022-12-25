#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>

using namespace std;

string encrypt(string text, int s)
{
    string result = "";

    for (int i = 0; i < text.length(); i++) {
        if (isupper(text[i]))
            result += char(int(text[i] + s - 65) % 26 + 65);
        else
            result += char(int(text[i] + s - 97) % 26 + 97);
    }
    return result;
}

int main()
{
    int Zadacha;

    cout << "\t\t#------------------#" << endl;
    cout << "\t\t|     THE MENU     |" << endl;
    cout << "\t\t#------------------#" << endl;
    cout << "\t\t| 1= ZADACHA 1     |" << endl;
    cout << "\t\t| 2= ZADACHA 2     |" << endl;
    cout << "\t\t| 3= ZADACHA 3     |" << endl;
    cout << "\t\t#------------------#" << endl;
    cout << "\t\t| 0= CLOSE         |" << endl;
    cout << "\t\t#------------------#" << endl;
    cout << "" << endl;
    cout << "Write what zadacha to show -->";
    cin >> Zadacha;
    system("cls");
    switch (Zadacha)
    {
    case 1:
    {

    }break;
    case 2:
    {
        char file_path[] = "file.txt";
        char file_text[256] = {};
        FILE* file = fopen(file_path, "r");

        size_t letters = 0;
        size_t lines = 0;
        size_t letters_vowel = 0;
        size_t letters_consonant = 0;
        size_t numbers = 0;

        while (fgets(file_text, 256, file)) {
            lines++;
            for (size_t i = 0; i < strlen(file_text); i++) {
                if (isdigit(file_text[i]))
                    numbers++;

                if (tolower(file_text[i]) == 'a' || tolower(file_text[i]) == 'e' || tolower(file_text[i]) == 'i' ||
                    tolower(file_text[i]) == 'o' || tolower(file_text[i]) == 'u')
                    letters_vowel++;
                if ((tolower(file_text[i]) != 'a' || tolower(file_text[i]) != 'e' || tolower(file_text[i]) != 'i' ||
                    tolower(file_text[i]) != 'o' || tolower(file_text[i]) != 'u') && isalpha(file_text[i]))
                    letters_consonant++;
            }
            letters += strlen(file_text);
        }

        cout << "Letters: " << letters - lines + 1 << endl;
        cout << "Lines: " << lines << endl;
        cout << "Vowel letters: " << letters_vowel << endl;
        cout << "Consonant letters: " << letters_consonant << endl;
        cout << "Numbers: " << numbers << endl;

        fclose(file);
        return 0;
    }break;
    case 3:
    {
        string text = "Cheeseburgers";
        int s = 4;
        cout << "Text : " << text;
        cout << "\nSdvig: " << s;
        cout << "\nCipher: " << encrypt(text, s);
        return 0;
    }
    }
}