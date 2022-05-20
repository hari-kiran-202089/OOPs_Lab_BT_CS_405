#include <iostream>

using namespace std;

class Student
{
private:
    int roll_num;
    string name;
    double *marks = NULL;
    int total_subjects;

public:
    // parametrized constructor
    Student(string nm, int r_n, int num_subject) : name(nm), roll_num(r_n), total_subjects(num_subject)
    {
    }
    void takeinputMarks()
    {
        if (marks != NULL)
        {
            delete[] marks;
        }
        marks = new double[total_subjects];
        for (int i = 0; i < total_subjects; i++)
        {
            cin >> marks[i];
        }
    }
    void displayMarks()
    {
        for (int i = 0; i < total_subjects; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
    // Destructor is used to delete the memory that we create for storing marks
    ~Student()
    {
        cout << "Destructor Called" << endl;
        delete[] marks;
    }
};

int main()
{
    Student s1 = {"Hari", 202089, 3};
    s1.takeinputMarks();
    cout << "Marks: " << endl;
    s1.displayMarks();

    return 0;
}
