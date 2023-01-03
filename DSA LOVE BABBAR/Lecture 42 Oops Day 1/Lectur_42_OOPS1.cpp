#include <iostream>
// #include "Hero.cpp"
using namespace std;

class Hero
{
    // Propoerties
private:
    int health;

public:
    char level;

    // Constructor
    Hero()
    {
        cout << "Constructor called" << endl;
    }

    // Parameterized constructor
    Hero(int Health)
    {
        cout << "this->             " << this << endl; // 0xbac89ffd40
        this->health = health;
    }

    Hero(int Health, char level)
    {
        cout << "this->             " << this << endl; // 0xbac89ffd40
        this->level = level;
        this->health = health;
    }

    void print()
    {
        cout << level << endl;
    }

    // Using get and set to acces the private data
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setlevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    // Constrctor callled
    Hero ramesh(10);
    // cout << "ADdress of Ramesh  " << &ramesh << endl;     // 0xbac89ffd40
    ramesh.print();
    // ramesh.gethealth();

    // Dynamically
    Hero *h = new Hero(11); // Contructor called
    h->print();

    Hero temp(22, 'B');
    temp.print();

    /*
    // Static allocation
    Hero a;
    cout << "Level is " << a.level << endl;
    cout << "Health is " << a.gethealth() << endl
         << endl;

    // Dyanmically allocation

    Hero *b = new Hero;
    cout << "Level is " << (*b).level << endl;
    cout << "health is " << (*b).gethealth() << endl
         << endl;

    // Creating an object
    Hero ramesh;
    cout << "Size of remesh is- >  " << sizeof(ramesh) << endl;

    // ramesh.health = 70;
    // ramesh.level = 'A';

    cout << "Health is " << ramesh.gethealth() << endl;
    // using setter
    ramesh.sethealth(70);
    ramesh.level = 'A';

    cout << "Health is :" << ramesh.gethealth() << endl;
    cout << "Level  is  " << ramesh.level << endl;


    */
}
