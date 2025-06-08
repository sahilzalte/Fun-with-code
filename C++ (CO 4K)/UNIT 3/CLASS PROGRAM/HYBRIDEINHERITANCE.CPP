#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Eating" << endl;
    }
};

class Mammal : public Animal
{
public:
    void breathe()
    {
        cout << "Breathing" << endl;
    }
};

class Bird
{
public:
    void fly()
    {
        cout << "Flying" << endl;
    }
};

class Bat : public Mammal, public Bird
{
    // Bat can both eat, breathe, and fly
};
int main()
{
    Bat b1;
    b1.breathe();
    b1.eat();
    b1.fly();
    return 0;
}