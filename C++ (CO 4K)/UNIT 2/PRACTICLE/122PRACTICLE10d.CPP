#include <iostream>
using namespace std;

class Student {
    
    int a=10, b=20;
    public:
        string name;
        int age;

        // Default constructor
        Student() {
            name = "Unknown";
            age = 0;
        }

        // Parameterized constructor
        Student(string n, int a) {
            name = n;
            age = a;
        }

        // Function to display student details
        void displayDetails() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

int main() {
    // Using the default constructor
    Student student1;
    student1.displayDetails();

    // Using the parameterized constructor
    Student student2("Alice", 20);
    student2.displayDetails();
    

    return 0;
}
