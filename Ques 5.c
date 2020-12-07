//Program to find all Prime factors of a number

#include<stdio.h>
void main()
{
    int i,j,num,f;
    printf("Enter the Number :");
    scanf("%d",&num);
    printf("Prime Factors of %d are :",num);
    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            f = 1;
            for(j=2; j<=i/2; j++)
            {
                if(j%i==0)
                {
                    f = 0;
                    break;
                }
            }
            if(f==1)
                printf("%d ",i);
        }
    }
}