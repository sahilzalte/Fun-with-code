/* Write a program to show object as function argument*/
#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name:" << name << ", Age:" << age << endl;
    }
};
void show(student s)
{
    cout << "Displaying Deails from function:" << endl;
    s.display();
}
int main()
{
    student std;
    cout << "Enter Student Name:";
    cin >> std.name;
    cout << "Enter Student Age :";
    cin >> std.age;
    show(std);
    return 0;
}