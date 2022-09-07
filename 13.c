/*13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/
#include<stdio.h>
int main()
{
    int x,y,r;
    printf("Enter a three-digit number: ");
    scanf("%d",&x);
    y=x/10;
    r=x%10;
    x=r*100+y;
    printf("%d",x);
    return 0;   
}