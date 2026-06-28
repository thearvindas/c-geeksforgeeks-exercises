// Q8: Write a Program to make a simple calculator.

/*
Input: Enter an operator (+, -, *, /): +
Enter operand 1: 7
Enter operand 2: 8

Output: 15.0
*/


#include <stdio.h>

int main() {

    char operator;
    int a, b;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    switch(operator) {
        case ('+') : printf("%d\n", a + b);
            break;
        case ('-') : printf("%d\n", a - b);
            break;
        case ('*') : printf("%d\n", a * b);
            break;
        case ('/') : printf("%d\n", a / b);
            break;
        default : printf("Can't perform operation!\n");
    }

    return 0;
}
