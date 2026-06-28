// Q4: Write a Program to Swap the values of two variables.

#include <stdio.h>

int main() {

    int x;
    int y;
    int swap;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    swap = x;
    x = y;
    y = swap;

    printf("\nOutput after swapping: x is %d and y is %d\n", x, y);

    return 0;
}