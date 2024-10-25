/*Write a program which show the use of constructor in derived class */

#include <iostream>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;

public:
    // Constructor of base class
    Person(string n, int a) : name(n), age(a)
    {
        cout << "Person constructor called." << endl;
    }

    // Function to display base class details
    void displayPersonInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person
{
    int roll_no;

public:
    // Constructor of derived class
    Student(string n, int a, int r) : Person(n, a), roll_no(r)
    {
        cout << "Student constructor called." << endl;
    }

    // Function to display derived class details
    void displayStudentInfo()
    {
        // Call base class function
        displayPersonInfo();
        // Display derived class-specific details
        cout << "Roll No: " << roll_no << endl;
    }
};

int main()
{
    // Create an object of derived class
    Student s("Sahil", 17, 122);

    // Display student information
    cout << "\nStudent Information: " << endl;
    s.displayStudentInfo();

    return 0;
}
