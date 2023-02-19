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
	char t, q, e;
		q = 'q';
		e = 'e';

	for (t = 'a'; t <= 'z'; t++)
	{
	if (t != e && t != q)
		putchar(t);
	}
	putchar('\n');
return (0);
}
