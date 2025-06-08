#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    // Virtual function to be overridden in derived classes
    virtual void sound()
    {
        cout << "This is a generic animal sound.\n";
    }
};

// Derived class - Dog
class Dog : public Animal
{
public:
    // Override sound() function
    void sound() override
    {
        cout << "Dog barks: Woof! Woof!\n";
    }
};

// Derived class - Cat
class Cat : public Animal
{
public:
    // Override sound() function
    void sound() override
    {
        cout << "Cat meows: Meow! Meow!\n";
    }
};

// Derived class - Cow
class Cow : public Animal
{
public:
    // Override sound() function
    void sound() override
    {
        cout << "Cow moos: Moo! Moo!\n";
    }
};

int main()
{
    // Base class pointer
    Animal *animalPtr;

    // Dog object
    Dog dog;
    animalPtr = &dog;
    animalPtr->sound(); // Calls Dog's overridden sound() method

    // Cat object
    Cat cat;
    animalPtr = &cat;
    animalPtr->sound(); // Calls Cat's overridden sound() method

    // Cow object
    Cow cow;
    animalPtr = &cow;
    animalPtr->sound(); // Calls Cow's overridden sound() method

    return 0;
}
