#include "main.h"
#include <stdlib.h>

/**
 * print_square - a function that prints a square
 * @size: the number of times printed
 * Return: no return
 */

void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
