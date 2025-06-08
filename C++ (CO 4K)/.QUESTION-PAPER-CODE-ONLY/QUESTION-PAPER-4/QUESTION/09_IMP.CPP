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
        cout<<value<<endl;
    }
};
int main()
{
    Number num(29);
    (-num).display();
    return 0;
}