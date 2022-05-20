#include <iostream>
using namespace std;

class Date
{
public:
    int year;
    int month;
    int day;
    Date(int d, int m, int y) : day(d), month(m), year(y){};
    void display()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};
class Person
{
private:
    string name;
    int age;
    Date dob; // object of another class (Containership)
public:
    Person(string nm, int ag, Date dt) : name(nm), age(ag), dob(dt) {}
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "DOB: ";
        dob.display();
    }
};

int main()
{
    Person p1("Stark", 30, Date(21, 12, 2022));
    p1.display();

    return 0;
}