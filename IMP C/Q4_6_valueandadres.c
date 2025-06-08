#include<stdio.h>
int main ()
{
    int num;
    int *ptr=&num;
    printf("enter number:");
    scanf("%d",&num);

    printf("Value of num : %d\n",num);
    printf("Address of num : %p",ptr);
    return 0;
}
/*
#include<stdio.h>
int main ()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);

    int *ptr;
    ptr=&num;

    printf("Value of num: %d\n",num);
    printf("Address of num : %p",ptr);
    return 0;
}
*/