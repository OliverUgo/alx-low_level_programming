#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Succsess)
 */
int main(void)
{
	char show[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(show, 4, 57, stdout);
	fflush(stdout);
	return (1);
}
