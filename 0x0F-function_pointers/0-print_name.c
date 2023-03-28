#include "function_pointers.h"

/**
 * print_name - a function that prints a name as it is
 * @f: a pointer to the variable
 * @name: the name to be printed
 *
 * Return: return nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
