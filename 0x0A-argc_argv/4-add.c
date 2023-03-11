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
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argv; i++)
		sum = sum + atoi(argv[i]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
	return (1);
	}
}
