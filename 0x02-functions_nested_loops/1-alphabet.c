#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char low_alph;

	for (low_alph = 'a'; low_alph <= 'z'; low_alph++)
	{	_putchar(low_alph);
	}
	_putchar('\n');
}
