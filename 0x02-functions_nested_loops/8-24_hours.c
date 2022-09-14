#include "main.h"
/**
 * jack_bauer - every minute of the day
 *
 * Return: 0
 *
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hoursReminder;
	int minsReminder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			minsReminder = minutes % 10;
			hoursReminder = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hoursReminder + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minsReminder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
