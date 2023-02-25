#include "main.h"
#include <stdlib.h>

/**
 * print_line - a function that prints straight line
 * @n: the number of times printed
 * Return: no return
 */

void print_line(int n)
{
	int x;

	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
			if (n <= 0)
			{
				_putchar('\n');
			}
	}
}
