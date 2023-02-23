#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char low_alph;
	int t;

	for (t = 1; t  <= 10; t++)
	{
		for (low_alph = 'a'; low_alph <= 'z'; low_alph++)
		{
			_putchar(low_alph);
		}
		{
			_putchar('\n');
		}
	}
}
