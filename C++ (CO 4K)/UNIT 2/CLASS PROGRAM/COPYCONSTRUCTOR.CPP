#include <iostream>
using namespace std;
class test
{
public:
    int x = 10;
    test(int a)
    {
        int x = a;
    }
    test(class test &obj)
    {
        cout << "copy constructor called !" << endl;
    }
};
int main()
{
    test t1(100);
    test t2 = t1;
    cout << "The first copy " << t1.x << endl;
    cout << "The secound copy " << t2.x << endl;
    return 0;
}