#include<stdio.h>
int multi(int num1, int num2)
{
    return num1 *num2;
}
int main ()
{
    int number1,number2,sum;
    printf("Enter the first number:");
    scanf("%d",&number1);

    printf("Enter the second number:");
    scanf("%d",&number2);

    sum=multi(number1,number2);

    printf("multiplication is : %d",sum);

    return 0;
}