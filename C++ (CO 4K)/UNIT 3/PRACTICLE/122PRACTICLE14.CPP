#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "Hello From A:" << endl;
    }
};
class B : public virtual A
{
};
class C : public virtual A
{
};
class D : public B, public C
{
};
int main()
{
    D obj;
    obj.show();
    return 0;
}