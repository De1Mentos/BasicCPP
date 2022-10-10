#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int Zadacha;
double R1;
double R2;
double R3;
double L;
double v;
double a;
double t;
double s;
int days;

int main()
{
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t|     THE MENU     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t|       WEEK2      |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t| 1= ZADACHA 1     |" << endl;
	cout << "\t\t| 2= ZADACHA 2     |" << endl;
	cout << "\t\t| 3= ZADACHA 3     |" << endl;
	cout << "\t\t| 4= ZADACHA 4     |" << endl;
	cout << "\t\t| 5= ZADACHA 5     |" << endl;
	cout << "\t\t| 6= ZADACHA 6     |" << endl;
	cout << "\t\t| 7= ZADACHA 7     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t| 0= EXIT          |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "" << endl;
	cout << "Write what zadacha to show -->";
	cin >> Zadacha;
	system("cls");
	switch (Zadacha)
	{
	case 1:
	{
		cout << "Write R1  -->";
		cin >> R1;
		cout << endl;
		cout << "Write R2  -->";
		cin >> R2;
		cout << endl;
		cout << "Write R3  -->";
		cin >> R3;
		cout << endl;
		cout << "The answer is "; cout << 1 / (1 / R1 + 1 / R2 + 1 / R3);

	}break;
	case 2:
	{
		cout << "Write Number -->";
		cin >> L;
		cout << endl;
		cout << "The answer is "; cout << ((L * L) / (4 * 3.14));
	}break;
	case 3:
	{
		cout << "Write time -->";
		cin >> t;
		cout << endl;
		cout << "Write speed -->";
		cin >> v;
		cout << endl;
		cout << "Write acceleration -->";
		cin >> a;
		cout << endl;
		cout << "The answer is "; cout << (v * t + (a * (t * t) / 2));

	}break;
	case 4:
	{
		cout << "Write time (In second) -->";
		cin >> s;
		cout << endl;
		cout << "Time in hours - "; cout << (s / 600) << endl;
		cout << "Time in minutes - "; cout << (s / 60) << endl;
		cout << "Time in seconds - "; cout << (s) << endl;

	}break;
	case 5:
	{
		cout << "NOT DONE";

	}break;
	case 6:
	{
		cout << "NOT DONE";
	}break;
	case 7:
	{
		cout << "Write amount of days -->";
		cin >> days;
		cout << endl;
		cout << (days / 7); cout << " Weeks & "; cout << (days % 7); cout << " days";
	}break;
	case 0:
	{

	}break;




























