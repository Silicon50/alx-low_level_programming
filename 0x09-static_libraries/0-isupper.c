#include "main.h"

/**
 * _isupper - check upper case
 * @c: the int character
 *
 * Return: return 1 or 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
