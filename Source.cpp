#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

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
		string str("123 gs sdg ");

		cout << str << endl;

		replace(str.begin(), str.end(), ' ', '\t');

		cout << str << endl;
	}break;
	case 2:
	{
		string str("123 gs sdg ");
		cout << str << endl;
		int
			nn = count_if(str.begin(), str.end(), isdigit),
			nc = count_if(str.begin(), str.end(), isalpha),
			ne = count_if(str.begin(), str.end(), [](char c) { return !(isalpha(c) || isdigit(c)); });

		cout << nn << " " << nc << " " << ne << endl;
	}break;
	case 3:
	{

	}break;
	case 4:
	{
		string str("12321");

		string buf = str;
		reverse(buf.begin(), buf.end());

		cout << (str == buf ? "true" : "false") << endl;
	}break;
	}
}