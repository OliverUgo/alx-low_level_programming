#include "main.h"
/**
 * print_most_numbers - a function that prints most numbers, from 0 to 9
 * @i: the character to be checked
 * Return: no return
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '14'; i++)
	{
		if (i <= 14)
		{	_putchar(i + '0');
		}
	}
	_putchar('\n');
}
