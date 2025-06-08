#include <iostream>
using namespace std;
class Collage
{
public:
    void IT()
    {
        cout << "COLLAGE" << endl;
    }
};

class SND : public Collage
{
public:
    void Poly()
    {
        cout << "SND" << endl;
    }
};
int main()
{
    SND S;
    S.IT();
    S.Poly();

    return 0;
}