#include <iostream>
using namespace std;
class myclass
{
    int i;

public:
    void read(int j)
    {
        i = j;
    }
    int getint()
    {
        return i;
    }
};
int main()
{
    myclass ob, *objectPointer;
    objectPointer = &ob;
    objectPointer->read(10);
    cout << objectPointer->getint();
    return 0;
}