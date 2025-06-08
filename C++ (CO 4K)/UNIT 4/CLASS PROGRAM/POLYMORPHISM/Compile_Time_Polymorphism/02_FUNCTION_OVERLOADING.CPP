#include <iostream>
using namespace std;
int add(int a, int b)
{
    cout << "Using function with 2 arguments" << endl;
    return a + b;
}
int add(int a, int b, int c)
{
    cout << "Using function with 3 arguments" << endl;
    return a + b + c;
}
int main()
{
    cout << "The sum of 5 and 6 is : " << add(5, 6) << endl;
    cout << "The sum of 5 , 8 and 6 is : " << add(5, 8, 6) << endl;
    return 0;
}