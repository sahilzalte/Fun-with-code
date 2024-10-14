/* Write a C++ program to declare a class Box having data members height, width, and breadth.
Accept this information for one object using a pointer to that object.
Display the area and volume of that object.*/

#include <iostream>
using namespace std;

class Box {
    float height;
    float width;
    float breadth;

public:
    // Function to input box dimensions
    void input() {
        cout << "Enter height of the box: ";
        cin >> height;
        cout << "Enter width of the box: ";
        cin >> width;
        cout << "Enter breadth of the box: ";
        cin >> breadth;
    }

    // Function to calculate and return the surface area of the box
    float calculateArea() {
        return 2 * (height * width + width * breadth + height * breadth);
    }

    // Function to calculate and return the volume of the box
    float calculateVolume() {
        return height * width * breadth;
    }

    // Function to display area and volume
    void display() {
        cout << "\nSurface Area of the box: " << calculateArea() << endl;
        cout << "Volume of the box: " << calculateVolume() << endl;
    }
};

int main() {
    // Create a pointer to a Box object
    Box *ptr = new Box;

    // Input details using pointer
    cout << "Enter the dimensions of the box:" << endl;
    ptr->input();

    // Display the area and volume using pointer
    ptr->display();

    // Deallocate the memory
    delete ptr;

    return 0;
}
