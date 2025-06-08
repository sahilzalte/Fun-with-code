// Unary Operator Overloading Using Friend Function
#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    // Friend function to overload unary minus (-)
    friend Number operator-(const Number &num);

    void display() const
    {
        cout << "Value: " << value << endl;
    }
};

// Definition of friend function to overload unary minus (-)
Number operator-(const Number &num)
{
    return Number(-num.value);
}

int main()
{
    Number num1(20);
    Number num2;

    cout << "Original number: ";
    num1.display();

    num2 = -num1; // Applying unary minus operator
    cout << "After applying unary minus: ";
    num2.display();

    return 0;
}
