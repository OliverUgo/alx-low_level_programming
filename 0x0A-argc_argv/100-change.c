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
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}

	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
 * change - get change
 * @cents: amount of coins from main function
 * Return: change
 */
int change(int cents)
{
	int coins[5] = {25, 10, 5, 2, 1};
	int num_coins = 0, amount, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		num_coins += amount / coins[i];
		amount = amount % coins[i];
	}

	printf("%d\n", num_coins);

	return (0);
}
