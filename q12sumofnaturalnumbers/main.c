// Q12: Write a Program to Calculate the Sum of Natural Numbers using recursion.

#include <stdio.h>

int sum(int num_of_terms);

int main() {

    int num_of_terms = 0;

    printf("How many terms? ");
    scanf("%d", &num_of_terms);

    if (num_of_terms <= 0) {
        printf("Invalid input. ");
    }

    else {
        printf("The sum is: %d\n", sum(num_of_terms));
    }

    return 0;
}

int sum(int num_of_terms) {

    int total = 0;
    if (num_of_terms == 1) {
        total = 1;
    }

    else {
        total = sum(num_of_terms - 1) + num_of_terms;
    }

    return total;
}