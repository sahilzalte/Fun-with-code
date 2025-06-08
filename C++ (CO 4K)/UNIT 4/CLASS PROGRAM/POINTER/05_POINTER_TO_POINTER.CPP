#include <iostream>
using namespace std;
int main()
{
    int a, *p, **p1;
    a = 125;
    p = &a;
    p1 = &p;
    cout << "1:" << a << endl;
    cout << "2:" << p << endl;
    cout << "3:" << p1 << endl;
    cout << "4:" << *p << endl;
    cout << "5:" << *p1 << endl;
    cout << "6:" << **p1 << endl;
    cout << "7:" << a << endl;
    return 0;
}