#include <iostream>
#include <fstream>
using namespace std;

class Point
{
private:
	int *b, *c, *d, *e;
	string a;
public:
	void set_a(string a)
	{
		string str = { a };
	}
	void set_b(int b)
	{
		this->b = new int{ b };
	}
	void set_c(int c)
	{
		this->c = new int{ c };
	}
	void set_d(int d)
	{
		this->d = new int{ d };
	}
	void set_e(int e)
	{
		this->e = new int{ e };
	}

	int get_a()
	{
		if (a == "")
		{
			cout << "a is empty!" << endl;
			return 0;
		}
		else
		{
			cout << a;
		}
	}
	int get_b()
	{
		if (b == nullptr)
		{
			cout << "b is empty!" << endl;
			return 0;
		}
		else
		{
			return *b;
		}
	}
	int get_c()
	{
		if (c == nullptr)
		{
			cout << "c is empty!" << endl;
			return 0;
		}
		else
		{
			return *c;
		}
	}
	int get_d()
	{
		if (d == nullptr)
		{
			cout << "d is empty!" << endl;
			return 0;
		}
		else {
			return *d;
		}
	}
	int get_e()
	{
		if (e == nullptr)
		{
			cout << "e is empty!" << endl;
			return 0;
		}
		else
		{
			return *e;
		}
	}
	Point()
	{
		set_a(0);
		set_b(0);
		set_c(0);
		set_d(0);
		set_e(0);
	}
	Point(string a, int b, int c, int d, int e)
	{
		set_a(a);
		set_b(b);
		set_c(c);
		set_d(d);
		set_e(e);
	}
	~Point()
	{
		cout << "~()" << endl;
		a = "";
		delete b;
		b = nullptr;
		delete c;
		c = nullptr;
		delete d;
		d = nullptr;
		delete e;
		e = nullptr;
	}
};


void print_poitn(Point* point)
{
	if (point != nullptr)
	{
		cout << "A - " << point->get_a() << endl;
		cout << "B - " << point->get_b() << endl;
		cout << "C - " << point->get_c() << endl;
		cout << "D - " << point->get_d() << endl;
		cout << "E - " << point->get_e() << endl;
	}
	else
	{
		cout << "Object is empty!" << endl;
	}
}

int main()
{
	int opt = 0;
	int a;
	int b;
	int c;
	int d;
	int e;
	while (opt != 4)
	{
		cout << "Pick the option" << endl;
		cout << "1 - Set info" << endl;
		cout << "2 - Create file" << endl;
		cout << "3 - See XYZ" << endl;
		cin >> opt;
		if (opt == 1)
		{
			cout << "Set PIB ";
			cin >> a;
			cout << "\Set Home telephone number ";
			cin >> b;
			cout << "\Set Work telephone number ";
			cin >> c;
			cout << "\Set Poket telelphone number ";
			cin >> d;
			cout << "\Set Extra info ";
			cin >> e;ww
		}
		else if (opt == 2)
		{
			ofstream myfile;
			myfile.open("XYZ.txt");
			myfile << "PIB - " << a;
			myfile << "Set Home telephone number - " << b;
			myfile << "Set Work telephone number - " << c;
			myfile << "Set Poket telelphone number - " << d;
			myfile << "Set Extra info - " << e;
			myfile.close();
		}
		else if (opt == 3)
		{
			Point* p_1 = new Point(a, b, c, d, e); //I have no idea how to use string in this sutiation, nor I can find info how to fix it
			print_poitn(p_1);
			delete p_1;
			p_1 = nullptr;
			print_poitn(p_1);
		}
	}
}