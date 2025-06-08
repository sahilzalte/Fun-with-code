#include <iostream>
using namespace std;
class Test
{
public:
    void fun(int x)
    {
        cout << "Value of x is:" << endl;
    }
    void fun(double a)
    {
        cout << "Value of x is :" << endl;
    }
    void fun(int x, int y)
    {
        cout << "Value of x and y is :" << x << " " << y << endl;
    }
};
int main()
{
    Test obj1;
    obj1.fun(7);
    obj1.fun(3.14);
    obj1.fun(0, 7);
    return 0;
}