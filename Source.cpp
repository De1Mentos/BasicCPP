#include <iostream>
using namespace std;

int mystrlen(const char* str)
{
	int size = 0;
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	return size;
}

char* mystrcpy(char* str1, const char* str2)
{
	int size = mystrlen(str2);
	str1 = new char[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		str1[i] = str2[i];
	}
	str1[size] = '\0';
	return str1;
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
	cout << "\t\t| 4= ZADACHA 4     |" << endl;
	cout << "\t\t| 5= ZADACHA 5     |" << endl;
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
		char str[] = "Orange";
		cout << "SIZE = " << mystrlen(str) << endl;
		return 0;
	}break;
	case 2:
	{
		char* str1 = new char [7] {"Orange"};
		const char* str2 = "Juice";
		cout << "Str 1 = " << str1 << endl;
		cout << "Str 2 = " << str2 << endl;
		str1 = mystrcpy(str1, str2);
		cout << "Str 1 = " << str1 << endl;
		cout << "Str 2 = " << str2 << endl;
		return 0;
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
	}
}
