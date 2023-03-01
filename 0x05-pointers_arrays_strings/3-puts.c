#include "main.h"

/**
 * _strlen - a  a function that returns the length of a string
 * @s: parameter to be measured or counte
 * Return: len
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
