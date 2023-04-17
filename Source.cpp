#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    int age;
public:
    Animal(string name, int age) : name(name), age(age) {}
    virtual void printInfo() = 0;
};

class Dog : public Animal {
private:
    string breed;
public:
    Dog(string name, int age, string breed) : Animal(name, age), breed(breed) {}
    void printInfo() override {
        cout << "Name: " << name << ", Age: " << age << ", Breed: " << breed << endl;
    }
};

class Cat : public Animal {
private:
    string color;
public:
    Cat(string name, int age, string color) : Animal(name, age), color(color) {}
    void printInfo() override {
        cout << "Name: " << name << ", Age: " << age << ", Color: " << color << endl;
    }
};

class Parrot : public Animal {
private:
    string language;
public:
    Parrot(string name, int age, string language) : Animal(name, age), language(language) {}
    void printInfo() override {
        cout << "Name: " << name << ", Age: " << age << ", Language: " << language << endl;
    }
};

int main() {
    Animal* dog = new Dog("Buddy", 3, "Labrador");
    Animal* cat = new Cat("Whiskers", 5, "Gray");
    Animal* parrot = new Parrot("Polly", 1, "English");

    dog->printInfo();
    cat->printInfo();
    parrot->printInfo();

    delete dog;
    delete cat;
    delete parrot;

    return 0;
}