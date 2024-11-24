#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int top = -1, stack[MAX];
void push()
{
    int val;
    if (top == MAX - 1)
    {

        printf("\nStack is Full!!");
    }
    else
    {
        printf("\nEnter element to push: ");
        scanf("%d", &val);
        top++;
        stack[top] = val;
    }
}
void pop()
{
    if (top == -1)
        printf("\nStack is empty!!");
    else
    {
        printf("\nDeleted Element is: %d", stack[top]);
        top--;
    }
}
void display()
{
    int i;
    if (top == -1)
        printf("\nStack is Empty!!");
    else
    {
        printf("\n**** Elements in Stack ****\n");
        for (i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}
int main()
{
    int ch;
    setbuf(stdout, NULL);
    printf("\n *** Stack Menu ***");
    printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
    while (1)
    {
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong Choice !!");
        }
    }
    return 0;
}
