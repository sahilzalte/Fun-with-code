#include <iostream>
using namespace std;
class Computer
{
public:
    void CO()
    {
        cout << "This is Computer Class" << endl;
    }
};

class Civil
{
public:
    void CE()
    {
        cout << "This is Civil Class" << endl;
    }
};

class SND : public Computer, public Civil
{
};
int main()
{
    SND S1;
    S1.CO();
    S1.CE();
    return 0;
}
