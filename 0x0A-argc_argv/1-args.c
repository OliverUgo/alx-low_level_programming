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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
