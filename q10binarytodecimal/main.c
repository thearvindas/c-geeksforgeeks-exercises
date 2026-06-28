// Q10: Write a Program to Convert Binary to Decimal.

#include <stdio.h>
#include <math.h>

int main() {

    int binary = 0;
    int decimal = 0;
    int count = -1;

    printf("Enter the binary number: ");
    scanf("%d", &binary);

    while (binary != 0) {
        int last_digit = binary % 10; //extracts last digit
        count += 1; // this counts position

        decimal = decimal + last_digit * pow(2, count);

        binary = binary / 10; //removes last digit
        
    }

    printf("Decimal value: %d\n", decimal);



    return 0;
}