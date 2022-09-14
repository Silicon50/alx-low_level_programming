#include "main.h"

/**
 * _isalpha - checking if c is an aphabet
 *
 * @c: character to be checked
 *
 * Description: is C an alphabet either in upper of lower case
 *
 * Return: 0
 */

int _isalpha(int c)
{
	int c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		_putchar(c);
	}
	_putchar('\n');
}
