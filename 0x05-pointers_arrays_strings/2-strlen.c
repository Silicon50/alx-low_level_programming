#include "main.h"

/**
 * _puts - prints string to std output
 * @str: parameter
 *
 * Return: void
**/

void _puts(char *str)
{
	int i = 0;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
