#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		putchar(t);
	}
	for (t = 'A'; t <= 'Z'; t++)
	{
		putchar(t);
	}
	putchar('\n');
return (0);
}
