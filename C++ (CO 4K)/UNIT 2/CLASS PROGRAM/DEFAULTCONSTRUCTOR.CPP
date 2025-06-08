#include <iostream>
using namespace std;
class myclass
{
public:
    int x;
    myclass()
    {
        cout<<"This is a default constructor called";
    }
};
int main()
{
    myclass M;
    return 0;
}