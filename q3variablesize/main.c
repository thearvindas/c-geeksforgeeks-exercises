// Q3: Write a Program to find the size of int, float, double, and char.

#include <stdio.h>

int main() {

    int a;
    float b;
    double c;
    char d;

    printf("Int is %ld bytes \n", sizeof(a));
    printf("Float is %ld bytes\n", sizeof(b));
    printf("Double is %ld bytes \n", sizeof(c));
    printf("Char is %ld byte\n", sizeof(d));   

    return 0;
}