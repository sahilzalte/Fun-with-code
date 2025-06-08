#include <iostream>
using namespace std;

class Calculator {
public:
    // Inline function to add two numbers
    inline int add(int a, int b) {
        return a + b;
    }
};

int main() {
    // Create an object of the Calculator class
    Calculator calc;

    // Use the inline function to add two numbers
    int sum = calc.add(5, 3);

    // Output the result
    cout << "The sum is: " << sum << endl;

    return 0;
}



