// Q2: Write a Program to find the Sum of two numbers entered by the user.

#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("\nEnter the second number: ");
    scanf("%d", &b);

    printf("The sum is %d\n", a + b);

    return 0;
}