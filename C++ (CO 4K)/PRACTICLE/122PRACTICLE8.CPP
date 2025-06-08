#include <iostream>
using namespace std;

class Counter {
private:
    static int count; // Static data member

public:
    // Constructor increments the static data member
    Counter() {
        count++;
    }

    // Static member function to get the count
    static int getCount() {
        return count;
    }
};

// Definition of the static data member outside the class
int Counter::count = 0;

int main() {
    // Create objects of the Counter class
    Counter obj1;
    Counter obj2;
    Counter obj3;

    // Call the static member function
    cout << "Number of Counter objects created: " << Counter::getCount() << endl;

    return 0;
}
