#include <stdio.h>
#include <stdlib.h>
#define max 5
int top = -1, stack[max];

void PUSH()
{
    int value;
    if (top == max - 1)
    {
        printf("Stack is Overflow!");
    }
    else
    {
        printf("Enter element to PUSH:");
        scanf("%d", &value);
        top++;
        stack[top] = value;
    }
}

void POP()
{
    if (top == -1)
    {
        printf("Stack is Underflow !");
    }
    else
    {
        printf("Deleted element is : %d", stack[top]);
        top--;
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty !");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
int main()
{
    int ch;
    setbuf(stdout, NULL);
    printf("***Stack Menu ***\n");
    printf("\n1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT");
    while (1)
    {
        printf("enter user choise:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            PUSH();
            break;
        case 2:
            POP();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("Wrong Choise");
            break;
        }
    }
    return 0;
}