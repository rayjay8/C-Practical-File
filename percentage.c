#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5, total;
    float percentage;
    printf("Enter marks of subject 1: ");
    scanf("%d", &sub1); // user enters 50
    printf("Enter marks of subject 2: ");
    scanf("%d", &sub2); // user enters 50
    printf("Enter marks of subject 3: ");
    scanf("%d", &sub3); // user enters 50
    printf("Enter marks of subject 4: ");
    scanf("%d", &sub4); // user enters 40
    printf("Enter marks of subject 5: ");
    scanf("%d", &sub5); // user enters 40
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5.0;
    printf("Percentage = %.2f", percentage);
    return 0;
}

// Output = Percentage = 46.00