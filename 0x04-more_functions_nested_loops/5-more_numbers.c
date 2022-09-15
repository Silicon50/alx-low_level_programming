#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints number to 14
 *
 * Return: return 0
 *
 */
void more_numbers(void)
{
	int n;
	int i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				putchar((i / 10) + '0');
			}
			putchar(10);
		}
	}
}
