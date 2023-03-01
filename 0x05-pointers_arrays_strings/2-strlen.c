#include "main.h"

/**
 * _strlen - a  a function that returns the length of a string
 * @s: parameter to be measured or counte
 * Return: len
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
