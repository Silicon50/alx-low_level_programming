#include "main.h"

/**
 * newalp - lets try using while loop
 *
 * Return: Always 0
 *
 */
void newalp(void)
{
	int i = 'a';
	while(i <= 'z')
	{
		if (i == 'd' || i == 'l')
		{
			i++;
			continue;
		}
		_putchar(i);
		_putchar('\n');
			i++;
	}
}
