// Q7: Write a Program to find the largest number among three numbers.

#include <stdio.h>

int main() {

    int a, b, c, largest;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    if (a > b) {
        largest = a;
    }

    else {
        largest = b;
    }

    if (largest < c) {
        largest = c;
    }

    else if (largest == c) {
        largest = c;
    }

    printf("The largest number is %d\n", largest);

    return 0;
}