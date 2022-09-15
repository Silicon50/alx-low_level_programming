#include "main.h"

/**
 * _isdigit - check digit
 *
 * @: test character
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}