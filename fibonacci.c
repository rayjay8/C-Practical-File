#include <stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n); // user enters 10
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;
    while (nextTerm <= n)
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}

// Output = Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,