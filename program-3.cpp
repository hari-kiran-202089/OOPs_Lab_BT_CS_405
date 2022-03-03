// Write a function power() which raise a number m to a number n.
//  The function takes double value of m and integer value of n and returns the result.
// Use a default value of n is 2 to make the function to calculatesquares when this argument when n is omitted.

#include <iostream>

using namespace std;
class Math
{
public:
    int power(double m, int n = 2)
    {
        double result = 1;
        for (int i = 0; i < n; i++)
        {
            result *= m;
        }
        return result;
    }
};

int main()
{
    Math m1;
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
