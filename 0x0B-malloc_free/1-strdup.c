#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
  *_strdup - returns a pointer to a newly alloctaed
  *space in memory which contains a copy of the string
  *passed.
  *@str: pointer to string being duplicated.
  *
  *Return: NULL if str is NULL.
  *pointer to duplicated string on success.
  *NULL if memory was insufficient.
  */
char *_strdup(char *str)
{
	int i, end;
	char *array;
	char *nstr;
	unsigned int len, i;

	/* check is str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	for (end = 0; end <= *str; end++)
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	end += 1;
	array = malloc(sizeof(char) * end);

	for (i = 0; i < end; i++)
		array[i] = str[i];
	nstr = malloc(sizeof(char) * (len + 1));

	if (array == NULL)
	/*check if malloc was successful*/
	if (nstr == NULL)
	{
		return (NULL);
	return (array);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);

}
