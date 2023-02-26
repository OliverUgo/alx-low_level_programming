#include "main.h"
#include <stdio.h>
/**
 * more_numbers - a function that prints the numbers, from 0 to 14
 * @i: the character to be printed
 * @m_3: the multiple of 3 to be replaced
 * @m_3: the multiple of 5 to be replaced
 * @m_3_5: the multiples of 3 and 5 to be replaced
 * Return: no return
 */

int main()
{
	char i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
