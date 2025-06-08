#include<stdio.h>
int main ()
{
    int i,sum=0;
    for ( i = 1; i <=20; i++)
    {
        if (i%2!=0)
        {
            sum+=i;
        }
        
    }
    printf("Sum of all odd numbers between 1 to 20 : %d ",sum);
    return 0;   
}