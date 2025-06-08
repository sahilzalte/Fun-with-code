#include <iostream>
using namespace std;
int main()
{
    int *p = new int;
    *p = 42;
    cout << "Value: " << *p << endl;
    cout << "Memory Address: " << p << endl;
    delete p;
    p = nullptr;
    return 0;
    // HEllO
}
