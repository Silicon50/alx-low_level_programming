#include <stdio.h>
#include "main.h"

/**
 * print_array - prints  element of the array
 * @a: parameter
 * @n: second parameter
 * Return:nothing
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar(10);
}
