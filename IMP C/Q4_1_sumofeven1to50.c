#include<stdio.h>
int main () 
{
    int i,sum=0;
    for ( i = 0; i <=50; i++)
    {
        if (i%2==0)
        {
            sum+=i;
        }
        
    }
    printf("sum of even numbers between 1 to 50 : %d ",sum);
    return 0;
}