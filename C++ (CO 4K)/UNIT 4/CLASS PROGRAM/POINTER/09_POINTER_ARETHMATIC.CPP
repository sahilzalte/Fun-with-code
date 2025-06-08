#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 10, z = 15;
    int *ptr1 = &x;
    int *ptr2 = &y;
    int *ptr3 = &z;

    cout << &x << endl;
    cout << &y << endl;
    cout << &z << endl;

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    cout << *ptr3 << endl;

    ++(*ptr1);
    cout << *ptr1 << endl;
    (*ptr1)--;
    cout << *ptr1 << endl;

    *ptr1 = (*ptr2) + (*ptr3);
    cout << *ptr1 << endl;
    *ptr1 = (*ptr2) - (*ptr3);
    cout << *ptr1 << endl;

    return 0;
}