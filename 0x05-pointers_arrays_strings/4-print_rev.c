#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *print_rev - Prints a reserve string
 *@s: parameter
 *Return: Nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	putchar(*(s + len));
	putchar(10);
}
