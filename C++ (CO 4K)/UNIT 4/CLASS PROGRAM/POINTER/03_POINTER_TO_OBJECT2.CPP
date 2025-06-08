#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "The real part is :" << real << endl;
        cout << "The imaginary part is :" << imaginary << endl;
    }
    void setdata(int a, int b)
    {
        real=a;
        imaginary=b;
    }
};
int main()
{   
    complex *ptr=new complex;
    ptr->setdata(1,54);
    ptr->getdata();
    delete ptr;
  

    return 0;
}