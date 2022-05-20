#include <iostream>
class DB;
class DM
{
private:
    double mtrs;
    double centmtrs;

public:
    DM(double m, double cm) : mtrs(m), centmtrs(cm)
    {
    }
    double getMtrs()
    {
        return mtrs;
    }
    double getCentMtrs()
    {
        return centmtrs;
    }
    void setMtrs(double m)
    {
        mtrs = m;
    }
    void setCentMtrs(double cm)
    {
        centmtrs = cm;
    }
    DM add(DB obj);
    void display()
    {
        std::cout << "Meters:" << mtrs << " CentMeters:" << centmtrs << std::endl;
    }
};
class DB
{
private:
    double feet;
    double inches;

public:
    DB(double ft, double inch) : feet(ft), inches(inch)
    {
    }
    double getFeet()
    {
        return feet;
    }
    double getInches()
    {
        return inches;
    }
    void setFeet(double ft)
    {
        feet = ft;
    }
    void setInches(double inch)
    {
        inches = inch;
    }
    void display()
    {
        std::cout << "Feet:" << feet << " Inches:" << inches << std::endl;
    }
};
// Function to add DM object with DB object
DM DM::add(DB obj)
{
    double CM = obj.getInches() * 2.54;
    CM += centmtrs;
    double MTRS = obj.getFeet() * 0.3048;
    MTRS += mtrs;
    return DM(MTRS, CM);
}
int main()
{
    double mtrs, centmtrs;
    double feet, inches;
    std::cout << "Enter Meters and Centimeters: " << std::endl;
    std::cin >> mtrs >> centmtrs;
    std::cout << "Enter Feet and Inches: " << std::endl;
    std::cin >> feet >> inches;
    DM dm1 = {mtrs, centmtrs}; // Creating object of type DM
    DB db1 = {feet, inches};   // Creating object of type DB
    DM dm2 = dm1.add(db1);     // adding DM with DB
    dm1.display();
    db1.display();
    std::cout << "\nAfter adding DM object with DB object: " << std::endl;
    dm2.display();

    return 0;
}
