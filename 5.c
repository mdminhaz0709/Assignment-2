//5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int a,rem=0,sum=0;
    printf("Enter a three-digit number ");
    scanf("%d",&a);
    rem=a%10;
    a=a/10;
    sum=sum+rem;

    rem=a%10;
    a=a/10;
    sum=sum+rem;

    rem=a%10;
    a=a/10;
    sum=sum+rem;
    printf("sum of the digits=%d",sum);
    return 0;   
}