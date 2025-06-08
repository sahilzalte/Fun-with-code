#include <iostream>
using namespace std;

int main() {
    int integerValue = 100;
    double doubleValue;

    // Implicit type casting from int to double
    doubleValue = integerValue;

    cout << "Integer Value: " << integerValue << endl;
    cout << "Double Value (after implicit casting): " << doubleValue << endl;

    return 0;
}



