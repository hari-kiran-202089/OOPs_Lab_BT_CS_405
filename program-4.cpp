// Write a program to show that the effect of default arguments can alternatively achievied
//  by overloading
#include <iostream>
using namespace std;

class Mymath
{
private:
public:
    double power(double m, int n);
    double power(double m);
};
double Mymath::power(double m, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= m;
    }
    return result;
}

double Mymath::power(double m)
{
    int n = 2;
    return power(m, n);
}

int main()
{
    Mymath m1;
    int base, exponent;
    cout << "Called power function with single argument\n";
    cout << "Enter base value: ";
    cin >> base;
    cout << "Value: " << m1.power(base);
    cout << "\nCalled power function with two arguments\n";
    cout << "Enter base value: ";
    cin >> base;
    cout << "Enter exponent value: ";
    cin >> exponent;
    cout << "Value: " << m1.power(base, exponent);

    return 0;
}
