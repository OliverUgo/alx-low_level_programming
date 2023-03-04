#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers
 * from n to 98, followed by a new line
 * d
 * @n: natural number to be printed
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int c;

	c = n;
	if (c <= 98)
	{
		printf("%d", n);
		for (c = n + 1; c <= 98; c++)
		{
			printf(", %d", c);
		}
	}
	else
	{
		printf("%d", n);
			for (c = n - 1; c >= 98; c--)
		{
			printf(", %d", c);
		}
	}
	printf("\n");
}
