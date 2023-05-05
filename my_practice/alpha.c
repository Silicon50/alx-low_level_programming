#include "main.h"

/**
 * alpha - print alphabet except c and k
 *
 * Return: Always 0
 */

void alpha(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'c' || i == 'k')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}

