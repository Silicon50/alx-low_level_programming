#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: print negative , zero or positive sign of a number
 *
 * Description: print the sign of number
 *
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
	else if (n < 0)
{
	_putchar('-');
	return (-1);
}
	else
{
	_putchar('0');
	return (0);
}
}
