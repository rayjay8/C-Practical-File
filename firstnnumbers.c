#include <stdio.h>

int main()
{
    int n, i = 3, count, c;

    printf("\nEnter the number of prime numbers required :  ");
    scanf("%d", &n); // User enters 5

    if (n >= 1)
    {
        printf("\n\nFirst %d prime numbers are :  ", n);
        printf("2 ");
    }

    for (count = 2; count <= n; i++)
    {
        for (c = 2; c < i; c++)
        {
            if (i % c == 0)
                break;
        }

        if (c == i)
        {
            printf("%d ", i);
            count++;
        }
    }
    return 0;
}

// Output: First 5 prime numbers are : 2 3 5 7 11