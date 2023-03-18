#include "main.h"

/**
 * print_rev - a function prints a reverse string
 * @s: the input string
 */
void print_rev(char *s)
{
	int n, i = 1, j = 0;

	while (*(s + i) != '\0')
		i++;
	n = i;
	while (j <= n)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
