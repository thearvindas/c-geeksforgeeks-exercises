// Q5: Write a Program to calculate Compound Interest.

/*
amount = P (1 + r/n)^(nt)
p = principal
r = interest rate in decimals
n = number of times interest is compounded per year
t = length of time you plan to invest
*/

#include <stdio.h>
#include <math.h>

int main() {

    float p;
    float r;
    float t;
    float amount;

    printf("Enter principal: ");
    scanf("%f", &p);

    printf("Enter time: ");
    scanf("%f", &t);

    printf("Enter rate: ");
    scanf("%f", &r);

    amount = p * pow(1 + r/100, t);

    printf("Compound interest is %f \n", amount - p);


    return 0;

}