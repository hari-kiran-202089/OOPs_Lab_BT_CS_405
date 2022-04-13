// Binary Operator Overloading
#include <iostream>

using namespace std;

class Point
{
public:
    int x;
    int y;

    // Default Constructor
    Point()
    {
        x = 0;
        y = 0;
    }
    // Parametraized Constructor
    Point(int x_val, int y_val)
    {
        x = x_val;
        y = y_val;
    }
    // Copy Constructor
    Point(Point &p1)
    {
        x = p1.x;
        y = p1.y;
    }
    // + operator overloading
    Point operator+(Point &p)
    {
        int X, Y;
        X = x + p.x;
        Y = y + p.y;
        Point p1 = {X, Y};
        return p1;
    }
    // Display The Point
    void printPoint();
};
void Point::printPoint()
{
    cout << x << ", " << y << endl;
}
int main()
{
    int x1, x2, y1, y2;
    cout << "Enter Point 1 co-ordinates: " << endl;
    cin >> x1 >> y1;
    cout << "Enter Point 2 co-ordinates: " << endl;
    cin >> x2 >> y2;
    Point p1(x1, y1);
    Point p2(x2, y2);
    Point p3;
    p3 = p1 + p2;
    cout << "After adding: " << endl;
    p3.printPoint();
    return 0;
}
