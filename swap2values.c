#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2); // user enters 5 10
    swap(&num1, &num2);
    printf("num1 = %d and num2 = %d", num1, num2);
}

// Output = num1 = 10 and num2 = 5