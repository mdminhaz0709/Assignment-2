/*12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/
 
#include <stdio.h>
int main() 
{
	float USD,INR;
    printf("Please enter amount in Dollars:");
	scanf("%f", &USD);
    INR = USD * 76.23;
    printf("Total amount %f in Rupees\n",INR);
    return 0;
}