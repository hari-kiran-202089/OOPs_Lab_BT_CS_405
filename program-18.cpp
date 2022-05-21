// Program to show the concept of runtime polymorphism  using virtual functions
#include <iostream>
using namespace std;
// Base class
class Animal
{
protected:
    string name;

public:
    Animal(string nm) : name(nm){};
    string getName() { return name; }
    void setName(string nm) { name = nm; }
    virtual string speak() = 0; // Pure virtual function
};

class Cat : public Animal
{
public:
    Cat(string nm) : Animal(nm){};
    string speak() override { return "Meow..."; }
};

class Dog : public Animal
{
public:
    Dog(string nm) : Animal(nm){};
    string speak() override { return "Woof..."; }
};

int main()
{
    Animal *a1 = new Dog("Mark");
    Animal *a2 = new Cat("Leo");
    cout << a1->getName() << " speaks " << a1->speak() << endl;
    cout << a2->getName() << " speaks " << a2->speak() << endl;
    return 0;
}