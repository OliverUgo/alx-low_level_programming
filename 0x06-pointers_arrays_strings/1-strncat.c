#include "main.h"
#include <string.h>

/**
 * _strcat -  a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: concat strings
 */

char *_strncat(char *dest, char *src, int n);
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[i + co] = src[co];
		if (src[co] == '\0')
			co = n;
	}

	return (dest);
}
}
