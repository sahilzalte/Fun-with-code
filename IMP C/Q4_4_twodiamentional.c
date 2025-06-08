#include<stdio.h>
int main ()
{
    int arr[3][3]={{10,20,30},{10,20,30},{10,20,30}};
    int sum=0,i,j;

    for ( i = 0; i < 3; i++)
    {
        for ( j= 0; j <3; j++)
        {
            sum+=arr[i][j];
        }
        
    }
    printf("Sum of 2d array is :  %d",sum);
    return 0;
}