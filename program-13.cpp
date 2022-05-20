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
class Employee : public Person
{
protected:
    string emp_id;
    double salary;

public:
    Employee(string nm, int ag, string id, double sal) : emp_id(id), salary(sal), Person(nm, ag){};
    // Getter Functions
    string getEmpId() { return emp_id; }
    double getSalary() { return salary; }
    // Setter Functions
    void setEmpId(string id) { emp_id = id; }
    void setSalary(double sal) { salary = sal; }
    void display()
    {
        Person::display();
        cout << "Employee Id: " << emp_id << endl;
        cout << "Salary: " << salary << endl;
    }
};
// Multi Level Inheritence
class Teacher : public Employee
{
private:
    string department;

public:
    Teacher(string nm, int ag, string id, double sal, string dept) : Employee(nm, ag, id, sal), department(dept) {}
    // Getter Functions
    string getDepartment() { return department; }
    // Setter Functions
    void setDepartment(string dept) { department = dept; }

    void display()
    {
        Employee::display();
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Teacher t1 = {"Anand", 30, "cse2203", 100000, "CSE"};
    t1.setSalary(150000); // Inherited function from Employee class
    t1.setAge(28);        // Inherited function from Person Class
    t1.display();

    return 0;
}