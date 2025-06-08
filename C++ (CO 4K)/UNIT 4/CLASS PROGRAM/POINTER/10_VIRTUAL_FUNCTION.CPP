#include <iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "Base Class" << endl;
    }
};
class Derived1 : public base
{
public:
    void show()
    {
        cout << "Derived Class 1" << endl;
    }
};
class Derived2 : public base
{
public:
    void show()
    {
        cout << "Derived Class 2" << endl;
    }
};
int main()
{
    base *ptr;
    ptr = new Derived1();
    ptr->show();
    ptr = new Derived2();
    ptr->show();
    delete ptr;
    return 0;
}