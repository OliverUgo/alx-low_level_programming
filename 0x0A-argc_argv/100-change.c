#include "main.h"
#include <stdio.h>

/**
 * main - a programme that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int i, prod = 0;

	if (argc > 2)
	{
		for (i = 1; i < argv; i++)
		prod = atoi(argv[1] * argv[2]);
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
	return (1);
	}
}
