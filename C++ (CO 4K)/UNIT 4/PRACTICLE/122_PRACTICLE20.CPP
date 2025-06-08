// Binary Operator Overloading Using Member Function
#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    // Overloading binary + operator using member function
    Number operator+(const Number &other)
    {
        return Number(value + other.value);
    }

    void display() const
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Number num1(10), num2(20), result;

    result = num1 + num2; // Using overloaded + operator
    cout << "Result of addition: ";
    result.display();

    return 0;
}
