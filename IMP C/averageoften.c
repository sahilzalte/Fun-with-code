#include<stdio.h>
int main ()
{
    int num[10],i,sum=0;

    printf("Enter ten numbers:");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    
    float average=(float)sum/10;

    printf("Average of ten numbers:%.2f",average);
    return 0;
}



/*#include<stdio.h>
int main ()
{
    int i,num[10];
    int sum=0;

    printf("Enter ten numbers :");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    float average = (float)sum/10;
    printf("Average of ten numbers is :%.2f",average);
    return 0;
    
}*/