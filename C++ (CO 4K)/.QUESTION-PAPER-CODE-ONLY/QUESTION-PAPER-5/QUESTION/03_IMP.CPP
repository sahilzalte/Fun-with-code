/* Write a C++ program to find smallest number from two numbers using friend function.
    (Hint:use two Classes)*/
#include <iostream>
using namespace std;
class c2;
class c1
{
    int num1;

public:
    c1(int n) : num1(n) {}
    friend int smallest(c1, c2);
};

class c2
{
    int num2;

public:
    c2(int n) : num2(n) {}
    friend int smallest(c1, c2);
};

int smallest(c1 obj1, c2 obj2)
{
    return (obj1.num1 < obj2.num2) ? obj1.num1 : obj2.num2;
}
int main()
{
    int a, b;
    cout << "Enter Two Numbers :";
    cin >> a >> b;

    c1 obj1(a);
    c2 obj2(b);

    cout << "The Smallest Number Is :" << smallest(obj1, obj2);
    return 0;
}