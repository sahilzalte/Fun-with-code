/* Write a program to overload '-'unary operator to negate the values.*/
#include <iostream>
using namespace std;
class Number
{
public:
    int value;
    Number(int val) : value(val) {}
    Number operator-()
    {
        return -value;
    }

    void display()
    {
        cout << value << endl;
    }
};
int main()
{
    Number num(20);
    (-num).display();
    return 0;
}
