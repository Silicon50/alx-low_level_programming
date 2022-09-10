#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - No entry point
 *
 *Return: Always 0 (Success!)
 */

int main(void)
{
	char c;
c = 'z';
while (c >= 'a')
{
	putchar(c);
	c--;
}
	putchar('\n');
	return (0);
}
