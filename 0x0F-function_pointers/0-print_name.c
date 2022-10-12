#include <stdio.h>
#include "main.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 * print_name - prints a name
 * @name: input params for name
 * @f: reps a function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
	if (name && f)
	{
		f(name);
	}
}
