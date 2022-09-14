#include "main.h"

/**
 * print_alphabet_x10 - print function abc 10x
 *
 * Description: print alphabets in lower case 10x
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char c;
	char i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
