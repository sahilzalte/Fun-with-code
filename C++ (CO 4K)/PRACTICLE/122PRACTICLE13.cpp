#include <iostream>
using namespace std;
class Computer
{
public:
    void display()
    {
        cout << "This is the Computer class." << endl;
    }
};
class Civil
{
public:
    void display()
    {
        cout << "This is the Civil class." << endl;
    }
};
class Snd : public Computer, public Civil
{
public:
    void display()
    {
        cout << "This is the Snd class." << endl;
    }
};
int main()
{
    Snd s1;

    s1.display();
    s1.display();
    s1.display();

    return 0;
}
