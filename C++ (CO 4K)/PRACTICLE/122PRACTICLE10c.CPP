// Copy constructor
#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    A(A &ref)
    {
        a = ref.a;
        b = ref.b;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    A obj(10,20);
    A obj2=obj;
    obj2.show();
    obj.show();
    return 0;
}