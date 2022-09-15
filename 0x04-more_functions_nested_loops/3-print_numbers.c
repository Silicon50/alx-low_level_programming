#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: return 0
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
