#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @r: the variable to be evaluated
 * Return: Always 0 (Success)
 */

int print_last_digit(int r)
{
	int n;

	n = (r % 10);
	if (n < 0)
	{
		n = (n * -1);
		_putchar(n + '0');
	}
	else
	{
		_putchar(n + '0');
	}
return (n);
}
