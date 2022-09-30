#include "main.h"

/**
 * _islower - check lower case character
 *
 * @c: use c for the argument
 *
 * Describtion: checking for lower case character
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{ return (1);
	}
	else
		return (0);
}
