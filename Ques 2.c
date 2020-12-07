//Program to find the factors of a number

#include<stdio.h>
void main()
{
    int num,i;
    printf("Enter the Number :");
    scanf("%d",&num);
    printf("Factors of %d :",num);
    for(i=1; i<=num/2; i++)
    {
        if(num%i==0)
            printf("\n%d",i);
    }
}