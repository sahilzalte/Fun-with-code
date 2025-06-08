/* Write a program to print first n natural numbers and theier sum using for loop */
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;

    cout << "Enter value of n :";
    cin >> n;

    cout << "The first " << n << " natural number are:";

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        sum += i;
    }

    cout << "\nThe sum of the first " << n << " numbers are:" << sum << endl;

    return 0;
}