#include<stdio.h>
#include<conio.h>
int main ()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter value for first matrix:\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("value for [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter value for secound matrix:\n");
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("value for [%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        
    }
    printf("Addition of matrix:\n");
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
