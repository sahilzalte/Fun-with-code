/*Write a C++ program to find out whether
the given number is even or odd (taking input from keyboard).*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number to check if it is even or odd: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Number is Even." << endl;
    }
    else
    {
        cout << "Number is odd." << endl;
    }

    return 0;
}