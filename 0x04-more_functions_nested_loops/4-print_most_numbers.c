#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - except 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if ((n == 2) || (n == 4))
		{
			continue;
		}
		putchar(n);
	}
	putchar(10);
}
