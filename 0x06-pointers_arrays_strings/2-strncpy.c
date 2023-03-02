#include "main.h"
#include <string.h>

/**
 * _strncpy -  a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of items
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}