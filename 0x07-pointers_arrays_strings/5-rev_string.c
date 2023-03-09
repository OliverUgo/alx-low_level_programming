#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - a function that reverses a string
 * @s: reversed string
 * input
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int i, l;
	char  bgn, end, swch;

	l = strlen(s);
	bgn = s;
	end = s + 1 - 1;
	for (i = 0; i < (l - 1) / 2; i++)
	{
		*end = *bgn;
		*bgn = swch;
		swch = *end;
		bgn++;
		end--;
	}
}
