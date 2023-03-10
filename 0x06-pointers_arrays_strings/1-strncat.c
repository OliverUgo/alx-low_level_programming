#include "main.h"
#include <string.h>

/**
 * _strcat -  a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number
 * Return: concat strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
