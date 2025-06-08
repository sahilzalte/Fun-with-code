//  Binary Operator Overloading Using Friend Function
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    // Friend function to overload binary + operator
    friend Number operator+(const Number& num1, const Number& num2);

    void display() const {
        cout << "Value: " << value << endl;
    }
};

// Definition of friend function to overload binary + operator
Number operator+(const Number& num1, const Number& num2) {
    return Number(num1.value + num2.value);
}

int main() {
    Number num1(15), num2(25), result;

    result = num1 + num2;  // Using overloaded + operator
    cout << "Result of addition: ";
    result.display();

    return 0;
}
