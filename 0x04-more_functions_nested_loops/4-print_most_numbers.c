#include "main.h"
/**
 * print_most_numbers - a function that prints most numbers, from 0 to 9
 * @i: the character to be checked
 * Return: no return
 */
void print_most_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 4 && i != 2)
		{	_putchar(i + '0');
		}
	}
	_putchar('\n');
}
