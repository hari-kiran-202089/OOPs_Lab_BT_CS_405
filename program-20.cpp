#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string name = "";
    string line;
    int roll_num;
    fstream file;
    int choice = 0;
    while (choice != 3)
    {
        cout << "Choices: " << endl
             << "1.Enter Data" << endl
             << "2.Display Data" << endl
             << "3.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            file.open("./students.txt", ios::app);
            if (file.is_open())
            {
                cout << "Enter our name: ";
                cin >> name;
                cout << "Enter roll number: ";
                cin >> roll_num;
                if (name != "" && roll_num != 0)
                {
                    file << "Name : " << name << "\n";
                    file << "Roll No: " << roll_num << "\n";
                }
            }
            file.close();
            break;
        case 2:
            file.open("./students.txt", ios::in);
            cout << "------Displaying the Name----" << endl;
            while (getline(file, line))
            {
                cout << line << endl;
            }
            file.close();
            break;
        case 3:
            cout << "Bye..." << endl;
        }
    }

    return 0;
}