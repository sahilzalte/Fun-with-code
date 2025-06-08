/* write a program to sort an 1-d array in ascending order. */
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 40, 29, 50, 5};
    int i, j, temp;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
        ;
    }

    return 0;
}