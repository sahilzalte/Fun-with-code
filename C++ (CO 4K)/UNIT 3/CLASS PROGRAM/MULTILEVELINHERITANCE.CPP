#include <iostream>
using namespace std;
class Collage
{
public:
    void Computer()
    {
        cout << "This is Computer engg." << endl;
    }
};

class SND : public Collage
{
public:
    void Civil()
    {
        cout << "This is Civil engg." << endl;
    }
};

class MIT : public SND
{
public:
    void Electrical()
    {
        cout << "This is Electrical engg." << endl;
    }
};
int main()
{
    MIT m1;
    m1.Computer();
    m1.Civil();
    m1.Electrical();

    return 0;
}
