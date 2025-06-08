// Friend Function 
#include <iostream>
using namespace std;
class Snd
{
private:
    int num = 31000;

public:
    friend void print(Snd s)
    {
        cout << "The Fees of Snd is :" << s.num << endl;
    }
};
int main()
{
    Snd s;
    print(s);
    return 0;
}


