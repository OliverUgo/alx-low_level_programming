#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - len of 1st str, len of 2nd str, if n < 2nd, 2nd = n
 * 2nd + 1st = total len, malloc + null byte, loop to insert into temp arr
 * @s1: input one
 * @s2: input two
 * @n: s2's number of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, i, j;
	char *newMem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = s2len = 0;

	while (s1[s1len] != '\0')
		s1len++;
	while (s2[s2len] != '\0')
		s2len++;

	if (n >= s2len)
		n = s2len;
	newMem = malloc(s1len + n + 1);

	if (newMem == NULL)
		return (NULL);
	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		newMem[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && j < n)
	{
		newMem[i] = s2[j];
		i++;
		j++;
	}
	newMem[i] = '\0';
	return (newMem);
}
