// Create a class TIME to store time in hours and minutes. Write a friend function to add two TIME objects.
#include <iostream>

using namespace std;

class Mytime
{
private:
    int minutes = 0;
    int hours = 0;
    int days = 0;

public:
    Mytime(int mint = 0, int hrs = 0, int dys = 0)
    {
        setTime(mint, hrs, dys);
    }
    int getMinutes() { return minutes; }
    int getHours() { return hours; }
    int getDays() { return days; }
    void setTime(int, int, int);
    void display() { cout << days << " days: " << hours << " hours: " << minutes << " minutes\n"; }
    friend Mytime add(Mytime &tm1, Mytime &tm2); // declaring add as a friend function
};

// function to add two time objects
Mytime add(Mytime &tm1, Mytime &tm2)
{
    int newMinutes = tm1.minutes + tm2.minutes;
    int newHours = newMinutes / 60;
    newMinutes = newMinutes % 60;
    newHours = newHours + tm1.hours + tm2.hours;
    int newDays = newHours / 24;
    newHours = newHours % 24;
    newDays = newDays + tm1.days + tm2.days;

    return Mytime(newMinutes, newHours, newDays);
}

void Mytime::setTime(int mint = 0, int hrs = 0, int dys = 0)
{
    if (mint < 0 || mint >= 60)
        cout << "Enter valid minutes\n";
    else if (hrs < 0 || hrs >= 24)
        cout << "Enter valid hours\n";
    else
    {
        minutes = mint;
        hours = hrs;
        days = dys;
    }
}

int main()
{
    Mytime t1;
    t1.setTime(25, 12, 1);
    Mytime t2 = {45, 12};
    Mytime t3 = add(t1, t2);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}
