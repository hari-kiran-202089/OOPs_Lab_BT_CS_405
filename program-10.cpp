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
    Point p1(x1, y1);
    Point p2;
    p1.printPoint();
    p2.printPoint();
    return 0;
}
