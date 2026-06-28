// Q9: Write a Program to find the factorial of a given number.

#include <stdio.h>

int main() {
    int num;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        factorial = factorial * i;
        printf("%d\n", factorial);
    }

    printf("Factorial of %d is %d\n", num, factorial);
}