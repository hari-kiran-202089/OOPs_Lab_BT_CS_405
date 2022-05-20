// Write a program to show multiple inheritance
#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string nm, int ag) : name(nm), age(ag) {}
    // Getter functions
    string getName() { return name; }
    int getAge() { return age; }
    // Setter functions
    void setName(string nm) { name = nm; }
    void setAge(int ag) { age = ag; }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Employee
{
protected:
    string emp_id;
    double salary;

public:
    Employee(string id, double sal) : emp_id(id), salary(sal){};
    // Getter Functions
    string getEmpId() { return emp_id; }
    double getSalary() { return salary; }
    // Setter Functions
    void setEmpId(string id) { emp_id = id; }
    void setSalary(double sal) { salary = sal; }
    void display()
    {
        cout << "Employee Id: " << emp_id << endl;
        cout << "Salary: " << salary << endl;
    }
};
// Multiple Inheritance
class Teacher : public Person, public Employee
{
private:
    string department;

public:
    Teacher(string nm, int ag, string id, double sal, string dept) : Person(nm, ag), Employee(id, sal), department(dept) {}
    // Getter Functions
    string getDepartment() { return department; }
    // Setter Functions
    void setDepartment(string dept) { department = dept; }

    void display()
    {
        Person::display();
        Employee::display();
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Teacher t1 = {"Anand", 30, "cse2203", 100000, "CSE"};
    t1.setSalary(150000);
    t1.setAge(28);
    t1.display();

    return 0;
}
