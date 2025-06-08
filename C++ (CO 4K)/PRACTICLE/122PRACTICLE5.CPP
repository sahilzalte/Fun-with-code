#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;

    // Function prototypes (declarations)
    double area();
    void displayDimensions();
};

// Function to calculate area (defined outside the class)
double Rectangle::area() {
    return length * width;
}

// Function to display the dimensions (defined outside the class)
void Rectangle::displayDimensions() {
    cout << "Length: " << length << ", Width: " << width << endl;
}

int main() {
    // Create an object of the Rectangle class
    Rectangle rect;

    // Assign values to the object's attributes
    rect.length = 5.0;
    rect.width = 3.0;

    // Call member functions
    rect.displayDimensions(); 
    cout << "Area: " << rect.area() << endl;           

    return 0;
}
