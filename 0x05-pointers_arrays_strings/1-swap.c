#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: first parameter to be swapped
 * @b: second parameter to be swapped
 * Return ()
 */

void swap_int(int *a, int *b)
{
	int temp_a_b;

	temp_a_b = *a;
	*a = *b;
	*b = temp_a_b;
}
