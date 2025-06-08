/*Write a C++ program to declare a class 'circle' with data
members as radius and area. Declare a function getdata to
accept radius and putdata to calculate and display area of
circle.*/
#include <iostream>
#include <cmath> // For mathematical functions
using namespace std;

class Circle
{
public:
    double radius;
    double area;

    // Function to accept radius
    void getdata()
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    // Function to calculate and display area
    void putdata()
    {
        area = 3.14 * radius * radius; 
        cout << "The area of the circle is: " << area << endl;
    }
};

int main()
{
    Circle c; // Creating an object of the class Circle

    c.getdata(); // Accept radius
    c.putdata(); // Calculate and display area

    return 0;
}
