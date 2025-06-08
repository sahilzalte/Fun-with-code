#include<stdio.h>
int main ()
{
    int arr[3]={1,2,3};
    int *ptr=arr;
    int sum=0,i;

    for ( i = 0; i < 3; i++)
    {
        sum+=*ptr;
        ptr++;
    }
    printf("Sum of array is : %d",sum);
    return 0;
}