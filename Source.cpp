#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string encrypt(string text, int s)
{
	string result = "";
	for (int i = 0; i < text.length(); i++) 
	{
		if (isupper(text[i]))
		{
			result += char(int(text[i] + s - 65) % 26 + 65);
		}
		else
		{
			result += char(int(text[i] + s - 97) % 26 + 97);
		}
	}
	return result;
}

ifstream fin;
ofstream fout;

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
			fout.open("cheese.txt", ofstream::app);
			if (fout.is_open())
			{
				bool Super;
				bool Puper;
				Super = "Orange ";
				Puper = "Juice";
				fout << Super;
				fout << Puper;
				fout.close();
				fout.open("burger.txt", ofstream::app);
				if (fout.is_open())
				{
					bool Mega;
					bool Omega;
					Mega = "Apple ";
					Omega = "Juice";
					fout << Mega;
					fout << Omega;
					if (Super != Mega)
					{
						cout << Super << " is not " << Mega << endl;
					}
					if (Puper != Omega)
					{
						cout << Puper << " is not " << Omega << endl;
					}
				}
				else
				{
					cout << "error" << endl;
				}
			}
			else
			{
				cout << "error" << endl;
			}
			fout.close();
		}break;
	case 2:
	{
	}break;
	case 3:
	{
		string text;
		cout << "Write the text ";
		cin >> text;
		fout.open("cheese.txt", ofstream::app);
		if (fout.is_open())
		{
			fout << text;
			fout.close();
		}
		else
		{
			cout << "error";
		}
		int s = 4;
		cout << "Text : " << text;
		cout << "\nShift: " << s;
		cout << "\nCipher: " << encrypt(text, s);
		fout.open("burger.txt", ofstream::app);
		if (fout.is_open())
		{
			fout << encrypt(text, s);
		}
		else
		{
			cout << "error";
		}
		fout.close();
		return 0;
	}break;
	}
	}