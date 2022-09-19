#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 *
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, n, len = 0;
	int x, y, i;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len - 1) / 2);

	for (i = n; str[i] != '\0'; i++)
	for (i = y; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');
	_putchar("\n");
}
