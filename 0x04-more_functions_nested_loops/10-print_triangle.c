#include "main.h"
#include <stdlib.h>

/**
 * print_diagonal - a function that prints straight line
 * @n: the number of times printed
 * Return: no return
 */

void print_diagonal(int n)
{
	int x, y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
