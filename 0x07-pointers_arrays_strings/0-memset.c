#include "main.h"
#include <string.h>

/**
 * *_memset -  a a function that fills memory with a constant byte
 * @s: return value
 * @b: source string
 * @n: number
 * Return: array string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
