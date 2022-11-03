#include <stdio.h>

int main()
{
    int length, width, area;
    printf("Enter the length of rectangle: ");
    scanf("%d", &length); // user enters 5
    printf("Enter the width of rectangle: ");
    scanf("%d", &width); // user enters 10
    area = length * width;
    printf("Area of rectangle is: %d", area); // area = 5 * 10 = 50
    return 0;
}

// Output = 50