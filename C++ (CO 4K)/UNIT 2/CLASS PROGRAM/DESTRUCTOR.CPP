#include <iostream>
using namespace std;
class snd
{
public:
    snd()
    {
        cout << "Constructor excoted" << endl;
    }
    ~snd()
    {
        cout<<"Destructor excuted"<<endl;
    }
};
int main()
{
    snd s1;
    snd s2;

    return 0;
}