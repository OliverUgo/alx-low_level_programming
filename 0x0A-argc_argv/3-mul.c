#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a programme that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc > 2)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
	return (1);
	}
}
