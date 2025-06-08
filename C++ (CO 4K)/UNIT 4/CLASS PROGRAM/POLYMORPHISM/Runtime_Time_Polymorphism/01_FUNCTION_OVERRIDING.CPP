#include <iostream>
using namespace std;
class A
{
public:
    void fun()
    {
        cout << "Sahil" << endl;
    }
};
class B : public A
{
public:
    void fun()
    {
        cout << "System 32" << endl;
    }
};
int main()
{
    B obj;
    obj.fun();    // Call the function in the B class
    obj.A::fun(); // Call the function in the A class
    return 0;
}