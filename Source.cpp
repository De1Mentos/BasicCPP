#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	int movespeed;
	int time;
	double skootstart1;
	double skootend1;
	double skootstart2;
	double skootend2;
	double skootstart3;
	double skootend3;
	int ZADACHA;
	int BenzinKM;
	int Benzin1;
	int Benzin2;
	int Benzin3;

	cout << "\t\t#------------------#" << endl;
	cout << "\t\t|     THE MENU     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t|   HOMEWORK 1     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t| 1= ZADACHA 1     |" << endl;
	cout << "\t\t| 2= ZADACHA 2     |" << endl;
	cout << "\t\t| 3= ZADACHA 3     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t| 0= CLOSE         |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "" << endl;
	cout << "Write what zadacha to show -->";
	cin >> ZADACHA;
	system("cls");
	switch (ZADACHA)
	{
	case 1:
	{
		cout << "Write a distance to Airoport (Meters) -->";
		cin >> movespeed;
		cout << "Write the time (Minutes) -->";
		cin >> time;
		cout << (movespeed / time) << " Meters/minutes - the speed at which transport needs to go.";

	}break;
	case 2:
	{
		cout << "Write at what time you started using skooter (hour) -->";
		cin >> skootstart1; cout << " minute -->"; cin >> skootstart2; cout << " seconds -->"; cin >> skootstart3; cout << endl;
		cout << "you started using skooter at " << skootstart1 << ":" << skootstart2 << ":" << skootstart3; cout << endl;
		cout << "Write at what time you stoped using skooter (hour) -->";
		cin >> skootend1; cout << " minute -->"; cin >> skootend2; cout << " seconds -->"; cin >> skootend3; cout << endl;
		cout << "you stoped using skooter at " << skootend1 << ":" << skootend2 << ":" << skootend3; cout << endl;
		cout << "You have to pay " << ((skootend1 - skootstart1) / 60 + (skootend2 - skootstart2) + (skootend3 - skootstart3) * 60) / 2 << " UAH";
	}break;
	case 3:
	{
		cout << "Gasoline consumption per 100 km -->";
		cin >> BenzinKM;
		cout << "Cost of the first kind of Gasoline -->";
		cin >> Benzin1;
		cout << "Cost of the second kind of Gasoline -->";
		cin >> Benzin2;
		cout << "Cost of the third kind of Gasoline -->";
		cin >> Benzin3;
		cout << "$--------------------------$" << endl;
		cout << "$Gasoline 1 price - " << Benzin1 * BenzinKM << "   $" << endl;
		cout << "$--------------------------$" << endl;
		cout << "$Gasoline 1 price - " << Benzin2 * BenzinKM << "   $" << endl;
		cout << "$--------------------------$" << endl;
		cout << "$Gasoline 1 price - " << Benzin3 * BenzinKM << "   $" << endl;
		cout << "$--------------------------$" << endl;
	}break;
	case 0:
	{

	}break;
	}
}