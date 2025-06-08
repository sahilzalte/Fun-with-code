#include <iostream>
using namespace std;
class ClassB; // Forward declaration
class ClassA {
private:
    int a;
public:
    ClassA(int val) : a(val) {}
    // Declare the friend function
    friend void displaySum(const ClassA&, const ClassB&);
};
class ClassB {
private:
    int b;
public:
    ClassB(int val) : b(val) {}
    // Declare the friend function
    friend void displaySum(const ClassA&, const ClassB&);
};
// Define the friend function outside the classes
void displaySum(const ClassA& objA, const ClassB& objB) {
    cout << "Sum of a and b: " << objA.a + objB.b << endl;
}
int main() {
    // Create objects of ClassA and ClassB
    ClassA objA(10);
    ClassB objB(20);
    // Call the friend function
    displaySum(objA, objB);
    return 0;
}

