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

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
