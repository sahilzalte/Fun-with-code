// Write a 'C++' program to find factorial of given number using loop.
#include <iostream>
using namespace std;
int main()
{
    int num;
    long factorial=1;

    cout<<"Enter number :";
    cin>>num;

    if (num<0)
    {
        cout<<"Factorial does not exists for nagative numbers"<<endl;
    }
    else
    {
        for (int i = 1; i <=num; ++i)
        {
            factorial *=i;
        }
        cout<<"Factorial of "<<num<<"is :"<<factorial<<endl;
    }
    
    return 0;
}
