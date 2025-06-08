#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is when constructor called For object number" << count << endl;
    cout<<endl;}
    ~num()
    {
        cout << "This is the time when myy destructr called object number" << count << endl;
        count--;cout<<endl;
        
    }
};
int main()
{
    cout << "We are inside our main Function" << endl;
    cout<<endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block";
        cout<<endl;
        cout << "Creating more objects" << endl;
        num n2, n3;
        cout<<endl;
        cout << "Exiting this block";
        cout<<endl;
    }
    cout << "Back to main";

    return 0;
}