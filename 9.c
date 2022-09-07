// 9. Write a program to print size of an int, a float, a char and a double type variable.

#include <stdio.h>

int main()
{
	int integerType;
	char charType;
	float floatType;
	double doubleType;
	printf("Size of int is: %d\n",sizeof(integerType));
	printf("Size of char is: %d\n",sizeof(charType));
	printf("Size of float is: %d\n",sizeof(floatType));
	printf("Size of double is: %d\n",sizeof(doubleType));

	return 0;
}
