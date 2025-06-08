
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a=1343,b=245,c=42;
    cout<<"The value of a is:"<<a<<endl;
    cout<<"The value of b is:"<<b<<endl;
    cout<<"The value of c is:"<<c<<endl;
    
    cout<<"With the help of setw() manipulator"<<endl;

    cout<<"The value of a is:"<<setw(5)<<a<<endl;
    cout<<"The value of b is:"<<setw(5)<<b<<endl;
    cout<<"The value of c is:"<<setw(5)<<c<<endl;
    
    return 0;
}