#include <iostream>
using namespace std;
double a, b, c, d;


int main()
{
	cout << "first number" << endl;
	cin >> a;
	cout << "second number" << endl;
	cin >> b;
	cout << "write number in between" << endl;
	d = 0;
	if(b > a)
	{
	do
	{
		cin >> c;
		if(c > a && c < b)
		{
			cout << "right " << endl;
			++d;
		}
		else
		{
			cout << "wrong " << endl;
		}
	} while (d == 0);
	cout << "the end" << endl;
	}
	else
	{
		do
		{
			cin >> c;
			if (c < a && c > b)
			{
				cout << "right " << endl;
				++d;
			}
			else
			{
				cout << "wrong " << endl;
			}
		} while (d == 0);
		cout << "the end" << endl;
	}
	return 0;
