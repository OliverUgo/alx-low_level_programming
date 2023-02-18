#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char show[] = "and that piece of art is useful\"i - Dora Korpar, 2015-10-19\n";

	fwrite(show, 4, 59, stdout);
	fflush(stdout);
	return (1);
}
