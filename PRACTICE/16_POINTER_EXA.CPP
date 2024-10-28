#include<iostream>
using namespace std;
class Base 
{
    public:
    int n1;
    void show()
    {
        cout<<"\nn1"<<n1;
    }
};
class derived : public Base
{
    public:
    int n2;
    void show()
    {
        cout<<"\nn1 "<<n1;
        cout<<"\nn2 "<<n2;
    }
};
int main()
{
    Base b;
    Base *bptr;
    cout<<"Pointer of base class points to it";
    bptr=&b;
    bptr->n1=44;
    bptr->show();
    derived d;
    cout<<"\n";
    bptr=&d;
    bptr->n1=66;
    bptr->show();
    return 0;
}