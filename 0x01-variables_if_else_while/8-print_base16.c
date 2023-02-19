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
	char t, _t;

	for (t = '0'; t <= '9'; t++)
	{
		putchar(t);
	}
	for (_t = 'a'; _t <= 'f'; _t++)
	{
		putchar(_t);
	}
	putchar('\n');
return (0);
}
