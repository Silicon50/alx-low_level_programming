#include "main.h"
/**
 * *_strncat - concatenate two strings
 * @dest: char
 * @src: char
 * @n: int
 *
 * Description -
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0'; j++)

	if (n > j)
	while (dest[i] != '\0')
	{
		for (k = i; src[k - 1] != '\0'; k++)
			dest[k] = src[k - 1];
		dest[k] = '\0';
		i++;
	}
	else
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		for (k = i; k < n + i; k++)
			dest[k] = src[k - 1];
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
