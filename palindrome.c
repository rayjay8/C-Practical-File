#include <stdio.h>

int main()
{
    int num, reversedNum = 0, remainder, originalNum;
    printf("Enter a number: ");
    scanf("%d", &num); // user enters 121
    originalNum = num;
    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    if (originalNum == reversedNum)
    {
        printf("%d is a palindrome", originalNum);
    }
    else
    {
        printf("%d is not a palindrome", originalNum);
    }
    return 0;
}

// Output = 121 is a palindrome