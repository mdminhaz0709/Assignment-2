//2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int y;
    printf("Enter a number ");
    scanf("%d",&y);
    printf("%d without its last digit is %d",y,y/10);
    return 0;   
}