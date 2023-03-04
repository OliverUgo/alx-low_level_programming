#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints sum of all natural numbers below 1024
 * that are multiples of 3 and 5
 * d
 * natural number to be printed
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, a;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			a += i;
	}
	printf("%d\n", a);
	puts("");
return (0);
}
