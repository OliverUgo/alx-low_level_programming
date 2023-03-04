#include "main.h"

/**
 * print_times_table - a function that prints n times table, starting with 0
 * h
 * @n: the number evaluated
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int i;
	int j;
	int t;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				t = (i * j);
				if (t <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(t + '0');
				}
				else if (t <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((t / 10) + '0');
					_putchar((t % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((t / 100) % 10) + '0');
					_putchar(((t / 10) % 10) + '0');
					_putchar((t % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
	}
}
