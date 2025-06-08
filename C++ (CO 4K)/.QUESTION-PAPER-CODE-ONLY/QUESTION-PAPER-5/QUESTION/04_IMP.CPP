/* Sum of array elements of size n*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of Array Elements:";
    cin >> n;

    int arr[n], sum = 0;

    cout << "Enter array Elements :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"The sum of array Elements :"<<sum;


    return 0;
}