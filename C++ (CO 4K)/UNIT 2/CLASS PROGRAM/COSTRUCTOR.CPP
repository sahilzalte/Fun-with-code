#include <iostream>
using namespace std;
class student
{
    int a = 10;

public:
    void setdata()
    {
        cout << "Enter Number:";
        cin >> a;
    }
    void displaydata()
    {
        cout << "You Enter :" << a;
    }
};

int main()
{
    student s1;
    s1.setdata();
    s1.displaydata();

    return 0;
}