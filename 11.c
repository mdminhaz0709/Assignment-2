/*11. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
    int x,n;
    printf("Enter a number and digit:");
    scanf("%d %d",&x,&n);
    x=x*10;
    x=x+n;
    printf("Number and digit then the resulting number is %d",x);
    return 0;   
}