#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int roll_no;
    string name;

public:
    // Default constructor with correct initialization
    student() : roll_no(0), name("Unknown") {}

    // Parameterized constructor
    student(int r, string n) : roll_no(r), name(n) {}

    // Function to get input from the user
    void get()
    {
        cout << "Enter roll no: ";
        cin >> roll_no;
        cin.ignore(); // Ignore newline after entering roll number
        cout << "Enter name: ";
        getline(cin, name); // Use getline to allow multi-word names
    }

    // Function to print student details
    void print()
    {
        cout << "Roll no is: " << roll_no << endl;
        cout << "Name is: " << name << endl;
    }
};

int main()
{
    // Create a student object dynamically using a pointer
    student *ps = new student;

    // Get and print student details using the pointer
    ps->get();
    ps->print();

    // Free the allocated memory
    delete ps;

    return 0;
}
