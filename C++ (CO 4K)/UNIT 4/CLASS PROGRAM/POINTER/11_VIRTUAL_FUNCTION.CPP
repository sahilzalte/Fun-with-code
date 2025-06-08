// Virtual Function
#include <iostream>
using namespace std;
class A
{
public:
    virtual void display()
    {
        cout << "I am from Base Class A" << endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "I am Derived Class B" << endl;
    }
};
class C : public A
{
public:
    void display()
    {
        cout << "I am From Derived" << endl;
    }
};
int main()
{
    A *p;
    B objb;
    C objc;

    p = &objb;
    p->display();
    p = &objc;
    p->display();

    return 0;
}
