#include "main.h"

/**
 * _strlen - a  a function that returns the length of a string
 * @s: parameter to be measured or counte
 * Return: len
 */

int _strlen(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
}
