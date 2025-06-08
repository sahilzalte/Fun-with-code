#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    int age;

public:
   
    void setData(string empName, double empSalary, int empAge) {
        name = empName;
        salary = empSalary;
        age = empAge;
    }

  
    void displayData() {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Age: " << age << " years" << endl;
    }
};

int main() {
    
    Employee emp1, emp2;

  
    emp1.setData("sahil", 50000, 30);

    emp2.setData("Mayur", 60000, 28);

    cout << "Employee 1 Details:" << endl;
    emp1.displayData();

    cout << endl;

    cout << "Employee 2 Details:" << endl;
    emp2.displayData();

    return 0;
}
