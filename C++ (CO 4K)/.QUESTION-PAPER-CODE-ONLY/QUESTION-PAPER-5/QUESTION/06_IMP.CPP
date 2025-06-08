/* Write a C++ program to declare a class student with members
as roll no, name and department. Declare a parameterised
constructor with default value for department as 'CO' to initialize
members of object. Initialize and display data for two students.
*/
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    string department;

public:
    // Parameterized constructor with default department value
    Student(int r, string n, string d = "CO")
    {
        rollNo = r;
        name = n;
        department = d;
    }

    // Function to display student details
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
    }
};

int main()
{
    // Creating objects of the Student class and passing values to constructor
    Student student1(101, "John Doe");         // Using default department value 'CO'
    Student student2(102, "Jane Smith", "IT"); // Specifying department 'IT'

    // Displaying the student details
    cout << "Student 1 Details:\n";
    student1.display();
    cout << "\nStudent 2 Details:\n";
    student2.display();

    return 0;
}
