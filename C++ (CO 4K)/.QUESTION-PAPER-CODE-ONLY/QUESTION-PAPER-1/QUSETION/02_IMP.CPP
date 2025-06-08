/*
Write a C++ program to find the area of rectangle using class rectangle which has following details
i) Accept length and breadth from the user.
ii) Calculate the area
iii) Display the result.
*/

#include <iostream>
using namespace std;

class Rectangle
{
public:
    double length, breadth;

    void acceptata()
    {
        cout << "Enter Length of the Rectangle :";
        cin >> length;
        cout << "Enter Breadth of the Rectangle :";
        cin >> breadth;
    }

    double calculatearea()
    {
        return length * breadth;
    }

    void Display()
    {
        cout << "The area of Rectangle is : " << calculatearea() << endl;
    }
};

int main()
{
    Rectangle R;
    R.acceptata();
    R.calculatearea();
    R.Display();
    return 0;
}