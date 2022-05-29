// Program to work with formatted and unformatted i/o operations
#include <iostream>
#include <iomanip> // for setw,setfill functions
using namespace std;
int main()
{
    // Unfomatted I/O operations
    char name[20];
    char department[20];
    cout << "------- Unfomatted I/O operations------\n";
    cout << "May I know your name please: ";
    cin.getline(name, 20);
    cout << "To which department do you belong: ";
    cin.getline(department, 20);
    cout.put('\n');
    cout << "___Displaying Details___" << endl;
    cout << "Name: ";
    cout.write(name, 20);
    cout.put('\n');
    cout << "Department: ";
    cout.write(department, 20);
    cout << endl;
    cout << endl;
    cout << "------- Formatted I/O ------" << endl;
    cout << "Printing a pattern using formatted I/O functions" << endl;
    string star = "*";
    for (int i = 0; i < 9; i++)
    {
        // Formatted I/O functions
        cout << setw(10);
        cout << setfill(' ');
        cout << star << endl;
        star += '*';
    }

    return 0;
}
