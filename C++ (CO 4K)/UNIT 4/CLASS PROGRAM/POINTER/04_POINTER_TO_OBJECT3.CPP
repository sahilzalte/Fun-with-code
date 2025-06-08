#include <iostream>
using namespace std;
class Demo
{
public:
    void show()
    {
        cout << "Hello From show function" << endl;
    }
    void show1()
    {
        cout << "Hello From show1 function:" << endl;
    }
};
int main()
{
    Demo d;
    Demo *ptr=&d;
    ptr->show();
    ptr->show1();
    return 0;
}