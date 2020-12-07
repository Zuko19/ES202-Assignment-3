//Program to find power of any number using loops.

#include <stdio.h>

void main()
{
    int base, exponent, i;
    long long power = 1;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    for(i=1; i<=exponent; i++)
        power = power * base;
    printf("%d raised to power %d = %lld", base, exponent, power);
}