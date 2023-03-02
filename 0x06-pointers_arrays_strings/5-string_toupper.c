#include "main.h"
#include <string.h>

/**
 * *string_toupper -  a function that changes all lowercase
 * letters of a string to uppercase
 * destination string
 * @n: source string
 * Return: concat strings
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
