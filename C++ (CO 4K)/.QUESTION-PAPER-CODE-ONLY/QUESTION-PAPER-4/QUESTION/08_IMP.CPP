/* Implement Following Hierarchy

            class : student
            data members : roll_no,name
            |
            |
            v
            class : test                                    class :sports
            data members : marks1 , marks2                  data members : score
            |                                                       |
            |                                                       |
            v      							|
                                                                v
            class : result  <---------------------------------------
            data member:total
*/

#include <iostream>
using namespace std;
class student
{
public:
    int roll_no;
    string name;
};
class test
{
public:
    float marks1, marks2;
};
class sports
{
public:
    float score;
};
class result : public student, public test, public sports
{
public:
    float total;

    void acceptData()
    {
        cout << "Enter student Roll no:";
        cin >> roll_no;
        cout << "Enter student name:";
        cin >> name; 
        cout << "Enter student marks for subject 1:";
        cin >> marks1;
        cout << "Enter student marks for subject 2:";
        cin >> marks2;
        cout << "Enter student sports score:";
        cin >> score;
    }

    void calculateTotal()
    {
        total = marks1 + marks2 + score;
    }
    void displayData()
    {
        cout << endl;
        cout << "--Result Details--" << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Marks1: " << marks1 << endl;
        cout << "Marks2: " << marks2 << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Total Score: " << total << endl;
    }
};
int main()
{
    result r;
    r.acceptData();
    r.calculateTotal();
    r.displayData();
    return 0;
}