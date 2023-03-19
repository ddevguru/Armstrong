// Program to find armstrong number

#include<stdio.h>
int main()
{
    int number,r,sum=0,temp;
    printf("Enter the number :\n");
    scanf("%d", &number);
    temp=number;
    while(number>0)
    {
        r=number%10;
        sum=sum+(r*r*r);
        number=number/10;
    }
    if(temp==sum)
    {
        printf("It is an armstrong number \n");
    }
    else
    {
        printf("Its is not an armstrong number");
    }
}