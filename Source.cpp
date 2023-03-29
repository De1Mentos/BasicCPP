#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Person 
{
public:
    Person(string name) : m_name(name) {}
    Person(const Person& other) : m_name(other.m_name) {}
    ~Person() {}

    string getName() const { return m_name; }
    string m_name;
};

class Apartment 
{
public:
    Apartment(int number) : m_number(number) {}
    Apartment(const Apartment& other) : m_number(other.m_number) {}
    ~Apartment() {}

    void addPerson(const Person& person) { m_people.push_back(person); }

    void printResidents() const {
        cout << "Residents of apartment " << m_number << ":\n";
        for (const auto& person : m_people) 
        {
            cout << "- " << person.getName() << "\n";
        }
        cout << "\n";
    }
    int m_number;
    vector<Person> m_people;

};

class Building {
public:
    Building(int numApartments) : m_numApartments(numApartments) {
        for (int i = 0; i < numApartments; i++) {
            m_apartments.push_back(Apartment(i + 1));
        }
    }
    Building(const Building& other) : m_numApartments(other.m_numApartments), m_apartments(other.m_apartments) {}
    ~Building() {}

    void addPersonToApartment(const Person& person, int apartmentNum) {
        if (apartmentNum > 0 && apartmentNum <= m_numApartments) {
            m_apartments[apartmentNum - 1].addPerson(person);
        }
    }

    void printResidents() const {
        cout << "Residents of the building:\n";
        for (const auto& apartment : m_apartments) {
            apartment.printResidents();
        }
    }

    int m_numApartments;
    vector<Apartment> m_apartments;
};

using namespace std;
int main()
{

    cout << "1 - start" << endl;
    int number;
    cin >> number;
    system("cls");
    switch (number)
    {
    case 1:
    {
        Building building(3);

        building.addPersonToApartment(Person("Joe Biden"), 1);
        building.printResidents();

    }break;
    }
}