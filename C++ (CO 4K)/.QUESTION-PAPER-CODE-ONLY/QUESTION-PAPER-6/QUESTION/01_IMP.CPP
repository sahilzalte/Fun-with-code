/* Write a C++ program to accept array of five elements, find
   and display smallest number from an array.*/
#include <iostream>
using namespace std;
int main()
{
    int arr[5], smallest;

    cout << "Enter 5 Elements : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    smallest = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i]<smallest)
        {
            smallest=arr[i];
        }
        
    }
    cout<<"Smallest Element is : "<<smallest<<endl; 
    return 0;
}