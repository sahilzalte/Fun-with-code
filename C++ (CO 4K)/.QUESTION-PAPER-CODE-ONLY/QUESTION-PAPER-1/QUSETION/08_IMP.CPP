/* Write a program to declare a class 'employee' containing
data members 'emp_id' and 'salary".
Accept and display this data for 10 employees.*/
#include <iostream>
using namespace std;

class employee
{
public:
    int emp_id;
    float salary;

    void accept_data()
    {
        cout << "Enter Employee id: ";
        cin >> emp_id;
        cout << "Enter Employee salary: ";
        cin >> salary;
    }

    void display_data()
    {
        cout << "Employee id: " << emp_id << endl;
        cout << "Employee salary: " << salary << endl;
    }
};

int main()
{
    employee e[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Employee " << i + 1 << ":" << endl;
        e[i].accept_data();
        cout << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "Details of Employee " << i + 1 << ":" << endl;
        e[i].display_data();
        cout << endl;
    }

    return 0;
}
