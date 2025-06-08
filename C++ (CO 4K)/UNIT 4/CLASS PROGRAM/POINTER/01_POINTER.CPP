#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *b;
    b = &a;

    cout << "The address of a is:" << &a << endl;
    cout << "The address of b is:" << b << endl;
    cout << "The value of address b is:" << *b << endl;
    int **c = &b;
    cout << "the address of b is :" << &b << endl;
    cout << "the address of b is :" << c << endl;
    cout << "The value at address c is : " << **c << endl;
    return 0;
}