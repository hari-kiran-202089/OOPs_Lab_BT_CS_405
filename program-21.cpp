// Program to copy conent of one file to the end of another file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;
    fstream file1;
    fstream file2("./file2.txt", ios::app);
    file1.open("./file1.txt", ios::in);
    if (file1.is_open() && file2.is_open())
    {
        int i = 1;
        while (!file1.eof())
        {
            getline(file1, line);
            file2 << i << " " << line << '\n';
            i++;
        }
    }
    file1.close();
    file2.close();

    return 0;
}