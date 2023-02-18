#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succsess)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;
		printf("Size of a char: %d\n", sizeof(charType));
		printf("Size of an int: %d\n", sizeof(intType));
		printf("Size of a long int: %d\n", sizeof(longintType));
		printf("Size of a long long int: %d\n", sizeof(longlongintType));
		printf("Size of a float: %d\n", sizeof(floatType));
	return (0);
}
