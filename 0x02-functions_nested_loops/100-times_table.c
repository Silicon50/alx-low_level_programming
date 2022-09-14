#include "main.h"

/**
 * print_times_table - print time table
 *
 * @n: the number
 *
 * Return: 0
 */

void print_times_table(int n)
{
	for (n = 1; n >= 0; n++)
	{
		if (n > 15 || n < 0)
			break;
		_putchar(n);
		_putchar('\n');
	}
}
