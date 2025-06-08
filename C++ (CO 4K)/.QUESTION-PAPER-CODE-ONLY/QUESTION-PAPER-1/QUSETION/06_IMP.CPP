/* Write a program to declare a class measure having data
members add₁, add, and add3. Initialize the data members using
constructor and store their addition in third data member using
function and display the addition.*/

#include <iostream>
using namespace std;
class measure
{
public:
    int add1, add2, add3;
    measure(int a, int b)
    {
        add1=a;
        add2=b;
        add3 = 0;
    }

    void calculate()
    {
        add3 = add1 + add2;
    }

    void display()
    {
        cout << "The addition is :" << add3 << endl;
    }
};
int main()
{
    measure m1(10, 30);
    m1.calculate();
    m1.display();
}