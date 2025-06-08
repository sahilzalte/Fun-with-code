#include <iostream>
using namespace std;

class Box
{
private:
    double width;

public:
    // Constructor to initialize width
    Box(double w) : width(w) {}

    // Friend function declaration
    friend void printWidth(Box b);
};

// Friend function definition
void printWidth(Box b)
{
    // Accessing private member directly
    cout << "Width of the box: " << b.width << endl;
}

int main()
{
    Box myBox(10.5);   // Creating an object of Box
    printWidth(myBox); // Calling the friend function

    return 0;
}
