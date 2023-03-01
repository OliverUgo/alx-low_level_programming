#include "main.h"

/**
 * _strlen - a  a function that returns the length of a string
 * @s: parameter to be measured or counte
 * Return: len
 */

int _strlen(char *s)
{
	nt i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
