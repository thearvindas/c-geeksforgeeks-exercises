// Q11: Write a Program to print the Fibonacci series using recursion.

#include <stdio.h>

int fibonacci(int n);

int main(void) {
    int n = 0;

    printf("How many terms? ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input.\n");
    }
    else {
        for (int i = 0; i < n; i++) { //this is controlling number of terms
            printf("%d ", fibonacci(i));
        }
    }

    return 0;
}

int fibonacci(int a) {
    if (a < 2){
        return a;
    }

    else {
        return fibonacci(a - 1) + fibonacci(a - 2);
    }
}