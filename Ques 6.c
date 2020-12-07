//Program to check whether  number is strong number or not_eq

#include <stdio.h>
void main()
{
    int i, originalNum, num, lastDigit, sum;
    long fact;
    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);
    originalNum = num;
    sum = 0;
    while(num > 0)
    {
        lastDigit = num % 10;
        fact = 1;
        for(i=1; i<=lastDigit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;

        num = num / 10;
    }
    if(sum == originalNum)
    {
        printf("%d is STRONG NUMBER", originalNum);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", originalNum);
    }
}