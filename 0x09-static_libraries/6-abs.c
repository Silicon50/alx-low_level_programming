#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the value of an integer
 *
 * @c: the argument to be used
 *
 * Return: 0
 *
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
