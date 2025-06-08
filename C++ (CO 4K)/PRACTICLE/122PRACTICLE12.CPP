#include <iostream>
using namespace std;

// Superclass for computer-related functionalities
class Computer {
public:
    void co() {
        cout << "This is the Computer class." << endl;
    }
};

// Superclass for civil engineering functionalities
class Civil {
public:
    void ce() {
        cout << "This is the Civil class." << endl;
    }
};

// Subclass that inherits from both Computer and Civil
class Snd : public Computer, public Civil {
public:
    void display() {
        cout << "This is the Snd class, inheriting from both Computer and Civil." << endl;
    }
};

int main() {
    Snd s1;

    // Calling methods from both superclasses
    s1.co(); // From Computer class
    s1.ce(); // From Civil class
    s1.display(); // From Snd class

    return 0;
}
