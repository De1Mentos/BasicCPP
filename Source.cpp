#include <iostream>

class Student {
public:
    Student() 
    {
        name = "";
        age = 0;
        grade = 0;
    }

    Student(std::string name, int age, int grade) {
        this->name = name;
        this->age = age;
        this->grade = grade;
    }

    Student(Student&& other) {
        name = std::move(other.name);
        age = std::move(other.age);
        grade = std::move(other.grade);
        other.name = "";
        other.age = 0;
        other.grade = 0;
    }

    ~Student() 
    {
    }

private:
    std::string name;
    int age;
    int grade;
};

int main()
{
	return 0;
}