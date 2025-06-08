/*Write a C++ program to implement multiple inheritance as shown in Figure No. 1.
Accept and display data of test marks and sport's marks using object of class 'result'.
    Class Name: Test
    Data members: marksı, marks 2
    Class Name: sports
    Data members: Sportmarks
    Class Name: result
    Data member: Total
*/
#include <iostream>
using namespace std;
class test
{
public:
    float marks1, marks2;
    void acceptdata()
    {
        cout << "Enter marks for marks1:";
        cin >> marks1;
        cout << "Enter marks for marks2:";
        cin >> marks2;
    }
};
class sport
{
public:
    float sportmarks;
    void accept_sport_marks()
    {
        cout << "Enter sports Marks :";
        cin >> sportmarks;
    }
};
class total : public test, public sport
{
public:
    float total;
    void total_marks()
    {
        total = marks1 + marks2 + sportmarks;
        cout << "The Total marks is :" << total << endl;
    }
};
int main()
{
    total t;
    t.acceptdata();
    t.accept_sport_marks();
    t.total_marks();
}