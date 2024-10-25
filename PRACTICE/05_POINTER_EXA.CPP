/* Write a C++ program to declare a class Birthday having data members day, month, and year.
Accept this information for five objects using a pointer to the array of objects.*/

#include <iostream>
using namespace std;

class Birthday
{
    int day, month, year;

public:
    // Function to input birthday details
    void input()
    {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    // Function to display birthday details
    void display()
    {
        cout << "Birthday: " << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    // Number of birthday objects
    const int SIZE = 5;

    // Create a pointer to an array of Birthday objects
    Birthday *ptr = new Birthday[SIZE];

    // Input details for each object
    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nEnter details for person " << i + 1 << ":\n";
        ptr[i].input();
    }

    // Display the details for each object
    cout << "\nDisplaying all birthdays:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Person " << i + 1 << ": ";
        ptr[i].display();
    }

    // Deallocate the memory
    delete[] ptr;

    return 0;
}
