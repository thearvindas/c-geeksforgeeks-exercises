// Q6: Write a Program to check if the given number is Even or Odd.

#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("even\n");
    }
    else {
        printf("odd\n");
    }

    return 0;
}