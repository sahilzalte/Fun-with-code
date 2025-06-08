#include <iostream>

int main() {
    // Dynamically allocate memory for an integer
    int* ptr = new int;

    // Assign a value to the allocated memory
    *ptr = 10;

    // Output the value stored in the allocated memory
    std::cout << "Value: " << *ptr << std::endl;

    // Deallocate the memory
    delete ptr;

    return 0;
}
