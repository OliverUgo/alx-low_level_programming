#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 * h
 * the variable to be evaluated
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (n = 1; n <= 9; n++)
		{
			if ((i * n) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((i * n) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((i * n) / 10) + '0');
				_putchar(((i * n) % 10) + '0');
			}
		}
			_putchar('\n');
	}
}
