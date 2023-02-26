#include "main.h"
#include <stdlib.h>

/**
 * print_triangle - a function that prints a triangle
 * @size: the number of times printed
 * Return: no return
 */

void print_triangle(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
			_putchar('#');
		}
		{
			_putchar('\n');
		}
	}
	if (size <= 0)
		_putchar('\n');
}
