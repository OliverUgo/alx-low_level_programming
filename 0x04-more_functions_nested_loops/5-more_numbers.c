#include "main.h"

/**
 * more_numbers - a function that prints the numbers, from 0 to 14
 * the character to be checked
 * Return: no return
 */

void more_numbers(void)
{
	int i, j;
	
	for (i = 0; i <= 9; i++)
{
		for (j = 0; j <= 14; j++)
			{
				if (j >= 10)
				{
					_putchar((j / 10) + '0');
				}
				_putchar((j % 10) + '0');
			}
		_putchar('\n');
	}
}
