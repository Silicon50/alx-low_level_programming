#include "main.h"

/**
 * times_table - Print 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int num;
	int multiple;
	int product;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');

			product = num * multiple;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
}
}
