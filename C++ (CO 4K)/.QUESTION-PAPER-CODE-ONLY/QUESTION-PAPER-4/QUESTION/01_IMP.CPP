/* Write a program to implement single inheritance from this
    class name : employee
        memeber variable : emp_id,name
                |
                |
                V
        class name : emp_info
    member variable :basic _salary
*/
#include <iostream>
using namespace std;
class employee
{
public:
    int emp_id;
    string name;
};
class emp_info : public employee
{
public:
    float basic_salary;

    void accept_data()
    {
        cout << "Enter empolyee id:";
        cin >> emp_id;
        cout << "Enter Employee name:";
        cin >> name;
        cout << "Enter Employee basic Salary:";
        cin >> basic_salary;
        cout << endl;
    }

    void display_data()
    {
        cout << "Employee Details:" << endl;
        cout << "Employee id :" << emp_id << endl;
        cout << "Employee name :" << name << endl;
        cout << "Employee basic Salary:" << basic_salary << endl;
    }
};

int main()
{
    emp_info e1;
    e1.accept_data();
    e1.display_data();
    return 0;
}