#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    void eat()
    {
        cout << "Eating" << endl;
    }
};

// Derived class Dog inherits from Animal
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};

// Derived class Cat inherits from Animal
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Meowing" << endl;
    }
};

int main()
{
    // Creating objects of derived classes
    Dog d1;
    Cat c1;

    // Calling methods from the base class Animal
    d1.eat();  // Dog inherits eat() from Animal
    d1.bark(); // Dog's specific method

    c1.eat();  // Cat inherits eat() from Animal
    c1.meow(); // Cat's specific method

    return 0;
}
