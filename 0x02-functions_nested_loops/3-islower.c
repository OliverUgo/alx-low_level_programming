#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: the character to be checked
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
