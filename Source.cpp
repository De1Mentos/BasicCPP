#include <iostream>
#include <fstream>
using namespace std;

class Point
{
private:
public:
	int a, b, c, d;
};

int main()
{
	int opt = 0;
	int a;
	int b;
	int c;
	int d;
	string aut;
	int s = 0;
		cout << "Pick the option" << endl;
		cout << "1 - Set Author name" << endl;
		cout << "2 - Set rectangle" << endl;
		cout << "3 - Set square" << endl;
		cout << "4 - Set rhombus" << endl;
		cout << "5 - Check stats" << endl;
		cout << "6 - Leave" << endl;
		cin >> opt;
		if (opt == 1)
		{
			cout << "Set author name ";
			cin >> aut;
		}
		else if (opt == 2)
		{

		}
		else if (opt == 3)
		{

		}
		else if (opt == 4)
		{

		}
		else if (opt == 5)
		{

		}
	return 0;
}