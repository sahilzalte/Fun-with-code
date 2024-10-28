#include <iostream>
using namespace std;

class Counter
{
private:
    int value;

public:
    // Constructor to initialize value
    Counter(int v = 0) : value(v) {}

    // Overload increment operator (++) as a member function (prefix)
    Counter &operator++()
    {
        ++value;
        return *this;
    }

    // Overload decrement operator (--) as a member function (prefix)
    Counter &operator--()
    {
        --value;
        return *this;
    }

    // Overload increment operator (++) as a friend function (postfix)
    friend Counter operator++(Counter &c, int)
    {
        Counter temp = c; // store current state
        c.value++;
        return temp; // return old state
    }

    // Overload decrement operator (--) as a friend function (postfix)
    friend Counter operator--(Counter &c, int)
    {
        Counter temp = c; // store current state
        c.value--;
        return temp; // return old state
    }

    // Display function
    void display() const
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Counter c(10);

    cout << "Initial Value: ";
    c.display();

    // Using member function for prefix increment
    ++c;
    cout << "After Prefix Increment (++c): ";
    c.display();

    // Using friend function for postfix increment
    c++;
    cout << "After Postfix Increment (c++): ";
    c.display();

    // Using member function for prefix decrement
    --c;
    cout << "After Prefix Decrement (--c): ";
    c.display();

    // Using friend function for postfix decrement
    c--;
    cout << "After Postfix Decrement (c--): ";
    c.display();

    return 0;
}
