#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    void setDetails(string n, int a)
    {
        name = n;
        age = a;
    }
    void displayDetails()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Student st[3];
    string name;
    int age;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter age of student " << i + 1 << ": ";
        cin >> age;
        st[i].setDetails(name, age);
    }
    cout << "\nStudent details:\n";
    for (int i = 0; i < 3; i++)
    {
        st[i].displayDetails();
    }
    
    return 0;
}
