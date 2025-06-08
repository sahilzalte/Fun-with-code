/* Passing parameters to the base class constructor and derived class constructor */
#include <iostream>
using namespace std;
class base
{
public:
    base(int x)
    {
        cout << "Base Constructor Called with value :" << x << endl;
    }
};
class derived : public base
{
public:
    derived(int x, int y) : base(x)
    {
        cout << "Derived consructor called With Value :" << y << endl;
    }
};
int main()
{
    derived d(10, 20);
    return 0;
}
