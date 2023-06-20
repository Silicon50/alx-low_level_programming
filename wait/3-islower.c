#include "main.h"

/**
 * _islower- test whether c is a lower case character
 * @x: integer input
 * Description- code test whether the letter c is lower case
 *
 * Return: 0 or 1
 */

int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
