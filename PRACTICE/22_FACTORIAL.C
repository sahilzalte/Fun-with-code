#include <stdio.h>

long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;
    printf("Enter a positive number:\n");
    scanf("%d", &num);

    // Check if input is positive
    if (num < 0)
    {
        printf("ERROR: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Calculate Factorial
    long long result = factorial(num);

    // Print result
    printf("Factorial of %d = %lld\n", num, result);
    return 0;
}
