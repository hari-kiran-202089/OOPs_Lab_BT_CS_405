#include <iostream>

using namespace std;
// Base Class
class Animal
{
protected:
    string species;

public:
    Animal() {} // Default Constructor
    Animal(string sp)
    {
        species = sp;
    }
    void display()
    {
        cout << "Species: " << species << endl;
    }
};
// Deriving from base class virtually
class AquaticAnimals : virtual public Animal
{
protected:
    string structure_type;

public:
    AquaticAnimals(){}; // Default Constructor
    AquaticAnimals(string st)
    {
        structure_type = st;
    }
    void display()
    {
        cout << "Structure Type: " << structure_type << endl;
    }
};
// Deriving from base class virtually
class TerrestrialAnimals : virtual public Animal
{
protected:
    string habitat_type;

public:
    TerrestrialAnimals() {} // Default Constructor
    TerrestrialAnimals(string ht)
    {
        habitat_type = ht;
    }
    void display()
    {
        cout << "Habitate Type: " << habitat_type << endl;
    }
};
// Multiple Inheritance
class Amphibians : public AquaticAnimals, public TerrestrialAnimals
{
public:
    Amphibians(string sp, string st, string ht) : Animal(sp), AquaticAnimals(st), TerrestrialAnimals(ht) {}
    void display()
    {
        Animal::display();
        AquaticAnimals::display();
        TerrestrialAnimals::display();
    }
};

int main()
{
    Amphibians amp("Hyperolius viridiflavus", "Vertebrate", "wetlands");
    amp.display();

    return 0;
}