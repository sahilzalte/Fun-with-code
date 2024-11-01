#include <iostream>
using namespace std;
int absolute(int var)
{
    if (var < 0)
    {
        var=-var;
        return var;
    }
}
float absolute(float var)
{
    if (var<0.0)
    {
        var =-var;
        return var;
    }
}
int main()
{
    int a = -5;
    float b = 5.5;
    cout << "Absolute value of" << a << "     " << absolute(a) << endl;
    cout << "Absolute value of" << a << "     " << absolute(b) << endl;
    return 0;
}
