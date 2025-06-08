#include <iostream>
using namespace std;
int main()
{
    int marks[] = {10, 20, 30, 40};
    int *p = marks;
    cout << *p++ << endl;
    cout << *p-- << endl;
    cout << *p + 40 << endl;
    cout << *p + 60 << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The value is :" << marks[i] << endl;
    }

    return 0;
}