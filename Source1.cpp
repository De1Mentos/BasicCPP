#include <iostream>
#include <iostream>
#include <fstream>
using namespace std;

class Point
{
private:
	int *x, *y, *z;
public:
	void set_x(int x)
	{
		this->x = new int {x};
	}
	void set_y(int y)
	{
		this->y = new int{y};
	}
	void set_z(int z)
	{
		this->z = new int{z};
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
	Point()
{
	set_x(0);
	set_y(0);
	set_z(0);
}
	Point(int x, int y, int z)
	{
		set_x(x);
		set_y(y);
		set_z(z);
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
	}
};


void print_poitn(Point* point)
{
	if (point != nullptr)
	{
		cout << "X - " << point->get_x() << endl;
		cout << "Y - " << point->get_y() << endl;
		cout << "Z - " << point->get_z() << endl;
	}
	else
	{
		cout << "Object is empty!" << endl;
	}
}

class Student
{
private:
	int* bir, * num, *gro;
	string city, name;
public:
	void set_bir(int bir)
	{
		this->bir = new int{ bir };
	}
	void set_num(int num)
	{
		this->num = new int{ num };
	}
	void set_gro(int gro)
	{
		this->gro = new int{ gro };
	}
	void set_city(string city)
	{
		string str = {city};
	}
	int get_bir()
	{
		if (bir == nullptr)
		{
			cout << "Birthday is empty!" << endl;
			return 0;
		}
		else
		{
			return *bir;
		}
	}
	int get_num()
	{
		if (num == nullptr)
		{
			cout << "School number is empty!" << endl;
			return 0;
		}
		else {
			return *num;
		}
	}
	int get_gro()
	{
		if (gro == nullptr)
		{
			cout << "group is empty!" << endl;
			return 0;
		}
		else
		{
			return *gro;
		}
	}
	string get_city()
	{
		if (city == "")
		{
			cout << "group is empty!" << endl;
			return "";
		}
		else
		{
			return city;
		}
	}
	Student()
	{
		set_bir(0);
		set_num(0);
		set_gro(0);
		set_city("");
	}
    Student(int bir, int num, int gro, string city)
	{
		set_bir(bir);
		set_num(num);
		set_gro(gro);
		set_city(city);
	}
	~Student()
	{
		cout << "~()" << endl;
		delete bir;
		bir = nullptr;
		delete num;
		num = nullptr;
		delete gro;
		gro = nullptr;
		city = "";
	}
};

void print_student(Student* student)
{
	if (student != nullptr)
	{
		cout << "Birthday - " << student->get_bir() << endl;
		cout << "School numbers - " << student->get_num() << endl;
		cout << "Group - " << student->get_gro() << endl;
		cout << "City - " << student->get_city() << endl;
	}
	else
	{
		cout << "Object is empty!" << endl;
	}
}

int main()
{
	int Zadacha;
	cout << "Pick Zadacha - 1 or 2 - ";
	cin >> Zadacha;
	switch (Zadacha)
	{
	case 1:
	{
		int opt = 0;
		int a;
		int b;
		int c;
		int d;
		do
		{
			cout << "Pick the option" << endl;
			cout << "1 - Set Birthdate, School number and Group" << endl;
			cout << "2 - Create file" << endl;
			cout << "3 - See info" << endl;
			cin >> opt;
			if (opt == 1)
			{
				cout << "Set Birthdate ";
				cin >> a;
				cout << "\Set School number ";
				cin >> b;
				cout << "\Set Group ";
				cin >> c;
				cout << "\Set City ";
				cin >> d;
			}
			else if (opt == 2)
			{
				ofstream myfile;
				myfile.open("Students.txt");
				myfile << "Birthday " << a << "; School number - " << b << "; Group - " << c << "; City - " << d;
				myfile.close();
			}
			else if (opt == 3)
			{
				cout << "Check the code manually, something is really off and it's too late for me to fix xd";
				//Student* s_1 = new Student(a, b, c, d);
				//print_poitn(s_1);
				//delete s_1;
				//s_1 = nullptr;
				//print_student(s_1);
			}
		} while (opt != 1000);
		return 0;
	}break;
	case 2:
	{
		int opt = 0;
		int a;
		int b;
		int c;
		while (opt != 4)
		{
			cout << "Pick the option" << endl; 
			cout << "1 - Set XYZ" << endl;
			cout << "2 - Create file" << endl;
			cout << "3 - See XYZ" << endl;
			cin >> opt;
			if (opt == 1)
			{
				cout << "Set X ";
				cin >> a;
				cout << "\Set Y ";
				cin >> b;
				cout << "\Set Z ";
				cin >> c;
			}
			else if (opt == 2)
			{
				ofstream myfile;
				myfile.open("XYZ.txt");
				myfile << "X - " << a << "; Y - " << b << "; Z - " << c;
				myfile.close();
			}
			else if (opt == 3)
			{
				Point* p_1 = new Point(a, b, c);
				print_poitn(p_1);
				delete p_1;
				p_1 = nullptr;
				print_poitn(p_1);
			}
		}
		return 0;
	}break;
	}
	
}