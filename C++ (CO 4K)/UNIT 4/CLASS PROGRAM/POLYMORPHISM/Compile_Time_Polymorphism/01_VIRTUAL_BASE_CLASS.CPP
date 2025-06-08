// Virtual Base Class
#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "This is the Base class." << endl;
    }
};

class Derived1 : virtual public Base
{
};
class Derived2 : virtual public Base
{
};

class Final : public Derived1, public Derived2
{
};

int main()
{
    Final obj;
    obj.show(); // Calls Base class method
    return 0;
}
