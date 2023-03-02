#include "main.h"
#include <string.h>

/**
 * *infinite_add -  a function that adds 2 nos
 * @n1: destination string
 * @n2: source string
 * @r: rev
 * @size_r: ddsw
 * Return: concat strings
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int j, k, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (j = 0; j < size; j += 10)
		{
			printf("%.8x:", j);
			for (k = j; k < j + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2x", *(b + k));
				else
					printf("  ");
			}
			printf(" ");
			for (l = j; l < j + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
	}
}
