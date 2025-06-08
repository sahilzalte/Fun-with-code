#include <iostream>

int main() {
    double doubleValue = 9.78;
    int integerValue;

    // Explicit type casting from double to int
    integerValue = (int)doubleValue; // C-style casting
    // or you can use static_cast<int>(doubleValue); // C++-style casting

    std::cout << "Double Value: " << doubleValue << std::endl;
    std::cout << "Integer Value (after explicit casting): " << integerValue << std::endl;

    return 0;
}
