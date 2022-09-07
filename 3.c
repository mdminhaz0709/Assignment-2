//3. Write a program to swap values of two int variables.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    printf("Before Swap values of a=%d and b=%d",a,b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("\nAfter swap values of a=%d and b=%d",a,b);
    return 0;   
}