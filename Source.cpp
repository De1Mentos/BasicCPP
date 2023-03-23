#include <iostream>
#include <iostream>
#include <fstream>
using namespace std;

class Point
{
private:
	int* x, * y, * z, * p;
public:
	void set_x(int x)
	{
		this->x = new int{ x };
	}
	void set_y(int y)
	{
		this->y = new int{ y };
	}
	void set_z(int z)
	{
		this->z = new int{ z };
	}
	void set_p(int p)
	{
		this->p = new int{ p };
	}

	int get_x()
	{
		if (x == nullptr)
		{
			cout << "x is empty!" << endl;
			return 0;
		}
		else
		{
			return *x;
		}
	}
	int get_y()
	{
		if (x == nullptr)
		{
			cout << "y is empty!" << endl;
			return 0;
		}
		else {
			return *y;
		}
	}
	int get_z()
	{
		if (z == nullptr)
		{
			cout << "z is empty!" << endl;
			return 0;
		}
		else
		{
			return *z;
		}
	}
	int get_p()
	{
		if (p == nullptr)
		{
			cout << "p is empty!" << endl;
			return 0;
		}
		else
		{
			return *p;
		}
	}
	Point()
	{
		set_x(0);
		set_y(0);
		set_z(0);
		set_p(0);
	}
	Point(int x, int y, int z, int p)
	{
		set_x(x);
		set_y(y);
		set_z(z);
		set_p(p);
	}
	~Point()
	{
		cout << "~()" << endl;
		delete x;
		x = nullptr;
		delete y;
		y = nullptr;
		delete z;
		z = nullptr;
		delete p;
		p = nullptr;
	}
};


void print_poitn(Point* point)
{
	if (point != nullptr)
	{
		cout << "X - " << point->get_x() << endl;
		cout << "Y - " << point->get_y() << endl;
		cout << "Z - " << point->get_z() << endl;
		cout << "P - " << point->get_p() << endl;
	}
	else
	{
		cout << "Object is empty!" << endl;
	}
}

void triangle(int a, int b)
{
	cout << (b * 2 * a) << " - Resultate" << endl << endl;
}
void rectangle(int a, int b, int c, int d)
{
	cout << (a * b * c * d) << " - Resultate" << endl << endl;
}
void cube(int a)
{
	cout << (a * 4) << " - Resultate" << endl << endl;
}
void rombus(int a, int b, int c, int d)
{
	cout << ((a*b*c*d)/2) << " - Resultate" << endl << endl;
}

int main()
{
	int opt = 0;
	int a;
	int b;
	int c;
	int d;
	int s = 0;
	while (opt != 6)
	{
		cout << "Pick the option" << endl;
		cout << "1 - Set triangle" << endl;
		cout << "2 - Set rectangle" << endl;
		cout << "3 - Set square" << endl;
		cout << "4 - Set rhombus" << endl;
		cout << "5 - Check stats" << endl;
		cout << "6 - Leave" << endl;
		cin >> opt;
		if (opt == 1)
		{
			s += 1;
			cout << "Set first number ";
			cin >> a;
			cout << "Set second number ";
			cin >> b;
			triangle(a, b);
		}
		else if (opt == 2)
		{
			s += 1;
			cout << "Set first number ";
			cin >> a;
			cout << "Set second number ";
			cin >> b;
			cout << "Set third number ";
			cin >> c;
			cout << "Set fourth number ";
			cin >> d;
			rectangle(a, b, c, d);
		}
		else if (opt == 3)
		{
			s += 1;
			cout << "Set first number ";
			cin >> a;
			cube(a);
		}
		else if (opt == 4)
		{
			s += 1;
			cout << "Set first number ";
			cin >> a;
			cout << "Set second number ";
			cin >> b;
			cout << "Set third number ";
			cin >> c;
			cout << "Set fourth number ";
			cin >> d;
			rombus(a, b, c, d);
		}
		else if (opt == 5)
		{
			cout << s;
		}
	}
	return 0;
}