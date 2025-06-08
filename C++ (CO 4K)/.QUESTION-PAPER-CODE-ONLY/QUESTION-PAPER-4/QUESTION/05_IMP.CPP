/* write a program to declare a class 'student' having data
members as 'stud_name' and 'roll_no'.Accept and display_data;his data for 5 students */
#include <iostream>
using namespace std;
class student
{
public:
    string stud_name;
    int roll_no;

    void accept_data()
    {
        cout << "Enter student Name :";
        cin >> stud_name;
        cout << "Enter student roll no:";
        cin >> roll_no;
    }

    void display_data()
    {
        cout << "Student name :" << stud_name << endl;
        cout << "Student roll no:" << roll_no << endl;
        cout << endl;
    }
};
int main()
{
    student s[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter deatails for Student " << i + 1 << ":" << endl;
        s[i].accept_data();
        cout << endl;
    }
    cout << "***Student Deatils***" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Details of Student " << i + 1 << ":" << endl;
        s[i].display_data();
        cout << endl;
    }

    return 0;
}