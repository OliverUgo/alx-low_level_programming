#include "main.h"
#include <stdlib.h>

/**
 * more_numbers - a function that prints the numbers, from 0 to 14
 * the character to be checked
 * Return: no return
 */

void more_numbers(void)
{
	int i, r, s = 10;

	for (r = 0; r < 10; r++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
			if (s <= 14)
				_putchar((s / 10) + '0');
				_putchar((s % 10) + '0');
			continue;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
