#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y); // user enters 5 10

    swap(&x, &y);
    printf("x = %d and y = %d", x, y);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Output = x = 10 and y = 5