#include <stdio.h>

int factorial(int n);

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n); // user enters 5
    printf("Factorial of %d = %d", n, factorial(n));
    return 0;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Output = Factorial of 5 = 120