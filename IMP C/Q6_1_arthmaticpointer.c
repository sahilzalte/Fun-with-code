#include<stdio.h>
int main ()
{
    int arr[4]={ 10,20,30,40};
    int *ptr=arr;

    ptr=ptr+2;
    printf("After addition : %d\n",*ptr);

    ptr=ptr-2;
    printf("After subtracting : %d\n",*ptr);

    ptr++;
    printf("Increment is  : %d\n",*ptr);

    ptr--;
    printf("Decrement is : %d\n",*ptr);

    return 0;
}


/*#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
 
    ptr = ptr + 2;  
    printf("After adding 2: %d\n", *ptr); 
    
    ptr = ptr - 1;  
    printf("After subtracting 1: %d\n", *ptr);  
    ptr++;  
    printf("After incrementing: %d\n", *ptr);  

    ptr--;  
    printf("After decrementing: %d\n", *ptr);  

    return 0;
}
*/