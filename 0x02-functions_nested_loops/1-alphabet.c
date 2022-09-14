#include "main.h"

/**
 * print_alphabet - print function abc
 *
 * Description: print alphabets in lower case
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
}
