#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void sound() const = 0;
};
class Dog : public Animal
{
public:
    void sound() const override
    {
        cout << "Dog says: Woof!" << endl;
    }
};
class Cat : public Animal
{
public:
    void sound() const override
    {
        cout << "Cat says: Meow!" << endl;
    }
};
class Cow : public Animal
{
public:
    void sound() const override
    {
        cout << "Cow says: Moo!" << endl;
    }
};
int main()
{
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();
    Animal *animal3 = new Cow();
    animal1->sound(); 
    animal2->sound(); 
    animal3->sound(); 
    // Clean up
    delete animal1;
    delete animal2;
    delete animal3;

    return 0;
}
