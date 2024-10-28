#include <iostream>
using namespace std;
class baseclass
{
    int x;

public:
    void setx(int i)
    {

        x = i;
    }
    int getx()
    {
        return x;
    }
};
class derivedclass : public baseclass
{
    int y;

public:
    void sety(int i)
    {
        y = i;
    }
    int gety()
    {
        return y;
    }
};
int main()
{
    baseclass *p;
    baseclass baseobject;
    derivedclass derivedobject;

    p = &baseobject;
    p->setx(10);
    cout << "Base object x:" << p->getx() << "\n";
    p = &derivedobject;
    p->setx(99);
    derivedobject.sety(88);
    cout << "Derived object x:" << p->getx() << "\n";
    cout << "Derived object y:" << derivedobject.gety() << "\n";

    return 0;
}