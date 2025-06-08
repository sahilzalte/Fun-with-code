#include<iostream>
using namespace std;
class collage
{
    public:
    void IT()
    {
        cout<<"Collage"<<endl;
    }
};
class SND : public collage
{
    public:
    void poly()
    {
        cout<<"SND"<<endl;

    }
};
int main ()
{
    SND s;
    s.IT();
    s.poly();
    return 0;
}