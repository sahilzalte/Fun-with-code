#include <iostream>
using namespace std;
class snd
{
private:
    int x;

public:
    snd(int a)
    {
        x = a;
        cout << "The parameterized constructor called:" << a << endl;
    }
};
int main()
{
    snd m(100);
    return 0;
}