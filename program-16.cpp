#include <iostream>

using namespace std;

class Square
{
private:
    double side; // side of a Square
public:
    // Default Constructor
    Square()
    {
        side = 0;
    }
    // Parameterized Constructor
    Square(double a) : side(a)
    {
    }
    // Copy Constructor
    Square(Square &s1)
    {
        side = s1.getSide();
    }
    // to get the side
    const double getSide()
    {
        return side;
    }
    // set the value of side
    void setSide(double a)
    {
        side = a;
    }
    // function to calculate area of a square
    double area()
    {
        return side * side;
    }

    // Unary operator overloading

    // Postfix
    // Increment the side
    Square operator++(int)
    {
        side++;
        return *(new Square(side));
    }
    // prefix
    Square operator++()
    {
        side++;
        return *(new Square(side));
    }
};

int main()
{
    int side;
    cout << "Enter Side: " << endl;
    cin >> side;
    Square s1(side);
    cout << "Area: ";
    cout << s1.area() << endl;

    ++s1;
    cout << "Area after increment: ";
    cout << s1.area() << endl;

    return 0;
}