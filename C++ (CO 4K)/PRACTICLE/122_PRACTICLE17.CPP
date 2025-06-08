// Pointer to Derived Class in Single Inheritance
#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Base class function called." << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class function called." << endl;
    }
};

int main()
{
    Base *basePtr;      // Pointer to base class
    Derived derivedObj; // Object of derived class

    basePtr = &derivedObj; // Base class pointer points to derived class object
    basePtr->show();       // Calls the base class show() function due to pointer type

    return 0;
}
