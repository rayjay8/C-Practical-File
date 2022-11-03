#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3); // user enters 5 10 15
    (num1 > num2 && num1 > num3) ? printf("%d is greatest", num1) : (num2 > num3) ? printf("%d is greatest", num2)
                                                                                  : printf("%d is greatest", num3);
    return 0;
}

// Output = 15 is greatest
