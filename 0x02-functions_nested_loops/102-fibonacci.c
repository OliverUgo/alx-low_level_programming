#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * d
 * fibonacci number to be printed
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, a, b, fb;

	a = 1;
	b = 2;
	printf("%d, %d, ", a, b);
	for (i = 0; i <= 48; i++)
	{
		fb = (a + b);
		printf("%d, ", fb);
		a = b;
		b = fb;
	}
	printf("\n");
return (0);
}
