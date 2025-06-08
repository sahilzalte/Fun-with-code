/* Write a C++ program to declare a class COLLEGE with
members as college code. Derive a new class as STUDENT
with members as studid. Accept and displaydata details of student
along with college for one object of student.
*/
#include <iostream>
using namespace std;
class COLLEGE
{
public:
    int college_code;
};
class STUDENT : public COLLEGE
{
public:
    int stud_id;

    void acceptdata()
    {
        cout<<"Enter College Code:";
        cin>>college_code;
        cout<<"Enter Student id:";
        cin>>stud_id;
        cout<<endl;
    }

    void displaydata()
    {
        cout<<"College Code:"<<college_code<<endl;
        cout<<"Student Id :"<<stud_id<<endl;
    }
};
int main()
{
    STUDENT S;
    S.acceptdata();
    S.displaydata();
    return 0;
}