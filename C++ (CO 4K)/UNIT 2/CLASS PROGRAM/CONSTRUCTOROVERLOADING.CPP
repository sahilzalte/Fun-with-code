#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    } 
    void displaydata()
    {
        cout << "You number is :" << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1(4, 3);
    c1.displaydata();
    complex c2(5);
    c2.displaydata();
    return 0;
}