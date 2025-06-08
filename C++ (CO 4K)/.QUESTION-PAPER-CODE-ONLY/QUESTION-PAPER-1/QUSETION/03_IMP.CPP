/* Write a C++ program to define structure student having data members
name, roll no., age. Accept and display data for one student.*/

#include <iostream>
using namespace std;
struct student
{
    string name;
    int roll_no;
    int age;
};
int main()
{
    student s1;
    cout << "Enter student name :";
    cin >> s1.name;
    cout << "Enter student roll no:";
    cin >> s1.roll_no;
    cout << "Enter student age :";
    cin >> s1.age;

    cout << endl;

    cout << "Student Details" << endl;
    cout << "Student Name : " << s1.name << endl;
    cout << "Student Roll no : " << s1.roll_no << endl;
    cout << "Student Age : " << s1.age << endl;
}
