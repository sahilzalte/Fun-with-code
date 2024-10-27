#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int baseVar;
public:
    Base(int b) : baseVar(b) {
        cout << "Base class constructor called\n";
    }
    void showBase() {
        cout << "Base Variable: " << baseVar << endl;
    }
};

// Intermediate derived class
class Intermediate : public Base {
protected:
    int intermediateVar;
public:
    Intermediate(int b, int i) : Base(b), intermediateVar(i) {
        cout << "Intermediate class constructor called\n";
    }
    void showIntermediate() {
        cout << "Intermediate Variable: " << intermediateVar << endl;
    }
};

// Final derived class
class Derived : public Intermediate {
private:
    int derivedVar;
public:
    Derived(int b, int i, int d) : Intermediate(b, i), derivedVar(d) {
        cout << "Derived class constructor called\n";
    }
    void showDerived() {
        cout << "Derived Variable: " << derivedVar << endl;
    }

    // Pointer usage in derived class
    void showAllUsingPointer() {
        Derived* ptr = this;
        cout << "\nAccessing through pointer:\n";
        ptr->showBase();
        ptr->showIntermediate();
        ptr->showDerived();
    }
};

int main() {
    Derived obj(10, 20, 30);

    // Display values directly
    cout << "Direct Access:\n";
    obj.showBase();
    obj.showIntermediate();
    obj.showDerived();

    // Display values using pointer
    obj.showAllUsingPointer();

    return 0;
}
