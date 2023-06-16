#include "lists.h"

/**
 * dlistint_len - a function that return number of elements
 * @h: pointer to head node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}
