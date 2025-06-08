// Write a program to swap two integers using call by reference method
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y;
    cout << "Enter first number :";
    cin >> x;
    cout << "Enter secound number : ";
    cin >> y;

    cout << "Before Swapping :" << x << "," << y << endl;

    swap(x, y);

    cout << "After Sqapping :" << x << "," << y << endl;

    return 0;
}