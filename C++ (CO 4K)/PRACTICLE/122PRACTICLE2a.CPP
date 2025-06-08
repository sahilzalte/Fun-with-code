#include <iostream>

class MyClass {
public:
    static int value;

    void display();
};

// Define the static member using the scope resolution operator
int MyClass::value = 42;

// Define the function outside the class using the scope resolution operator
void MyClass::display() {
    std::cout << "Value is: " << MyClass::value << std::endl;
}

int main() {
    MyClass obj;
    obj.display(); // Output: Value is: 42

    return 0;
}
