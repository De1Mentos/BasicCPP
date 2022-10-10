#include <iostream>
#include <cmath>
using namespace std;


int main()
{

	int Zadacha;
	int NUMBA;
	int option;
	int guess;
	int pipka;

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
		int start;
		int end;
		int count = 0;

		cout << "Enter Start -->";
		cin >> start; cout << endl;
		if (start > 500)
		{
			int temp = start;
			start == 500;
			500 == temp;
		}
		int i = start;
		long long sum = 0;
		do
		{
			cout << "sum = " << sum << " + " << i << " = " << sum + i << endl;
			sum += i;
			i++;
		} while (i <= 500);
		cout << "Sum = " << sum << endl;
	}break;
	case 2:
	{
		double x;
		double y;
		cout << "Write in X number --> "; cin >> x; cout << endl;
		cout << "Write in y number --> "; cin >> y; cout << endl;
		cout << "Result --> " << pow(x, y);
	}
	case 3:
	{
		int counter = 0;
		for (int i = 0; i <= 1000; i++)
			counter += i;

		cout << "Average: " << counter / 1000.0 << endl;

		return 0;

	}break;
	case 4:
	{
		int start;
		int end;
		int count = 0;

		cout << "Enter Start -->";
		cin >> start; cout << endl;
		if (start > 21)
		{
			int temp = start;
			start == 21;
			21 == temp;
		}
		int i = start;
		long long sum = 0;
		do
		{
			cout << "dobutok = " << sum << " * " << i << " = " << sum * i << endl;
			sum++;
			i++;
		} while (i < 21);
	}break;
	case 5:
	{
		double k;
		cout << "Write in K number --> "; cin >> k; cout << endl;
		system("cls");
		cout << k << " * " << 1 << " = " << (k * 1) << endl;
		cout << k << " * " << 2 << " = " << (k * 2) << endl;
		cout << k << " * " << 3 << " = " << (k * 3) << endl;
		cout << k << " * " << 4 << " = " << (k * 4) << endl;
		cout << k << " * " << 5 << " = " << (k * 5) << endl;
		cout << k << " * " << 6 << " = " << (k * 6) << endl;
		cout << k << " * " << 7 << " = " << (k * 7) << endl;
		cout << k << " * " << 8 << " = " << (k * 8) << endl;
		cout << k << " * " << 9 << " = " << (k * 9) << endl;
		cout << k << " * " << 10 << " = " << (k * 10) << endl;
	}break;
	}
}