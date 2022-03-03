// Program to make the use of inline function
#include <iostream>
using namespace std;

inline int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int a, b;
    cout << "Enter number1: ";
    cin >> a;
    cout << "Enter number2: ";
    cin >> b;
    cout << "Sum is " << add(a, b);

    return 0;
}
