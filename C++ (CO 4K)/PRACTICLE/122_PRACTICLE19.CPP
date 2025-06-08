// Unary Operator Overloading Using Member Function
#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    // Overloading unary minus (-) using member function
    Number operator-()
    {
        return Number(-value);
    }

    void display() const
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Number num1(10);
    Number num2;

    cout << "Original number: ";
    num1.display();

    num2 = -num1; // Applying unary minus operator
    cout << "After applying unary minus: ";
    num2.display();

    return 0;
}
