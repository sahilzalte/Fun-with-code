// Pointer to Derived Class in Multilevel Inheritance
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class function called." << endl;
    }
};

class Intermediate : public Base
{
public:
    void show() override
    {
        cout << "Intermediate class function called." << endl;
    }
};

class Derived : public Intermediate
{
public:
    void show() override
    {
        cout << "Derived class function called." << endl;
    }
};

int main()
{
    Base *basePtr;      // Pointer to base class
    Derived derivedObj; // Object of derived class

    basePtr = &derivedObj; // Base class pointer points to derived class object
    basePtr->show();       // Calls Derived class show() due to virtual function mechanism

    return 0;
}
