#include<stdio.h>
int main ()
{
    int i,k,j,a[3][3],b[3][3],c[3][3];
    int count=3;
    printf("Enter value for first matrix:\n");

    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            printf("value for [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }    
    }
    printf("Enter value for secound matrix:\n");

    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            printf("Value for [%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }        
    }
    
    printf("Multiplcation is :\n");
    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            c[i][j]=0;
            for ( k = 0; k < count; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
            
        }
        
    }
    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
    
        return 0;
    
}