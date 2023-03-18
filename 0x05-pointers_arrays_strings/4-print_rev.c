#include "main.h"

/**
 * print_rev - a function prints a reverse string
 * @s: the input string
 */
void print_rev(char *s)
{
	int i = 0, j = 0;

	while (*(s + i) != '\0')
		i++;
	if (s[i] != '\n')
	{
		while (j <= i)
		{
			_putchar(s[i]);
			i--;
		}
	}
	_putchar('\n');
}
