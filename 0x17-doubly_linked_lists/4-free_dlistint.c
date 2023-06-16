#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: double pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *temp1 = head;

	while (temp)
	{
		temp = temp->next;
		free(temp1);
		temp1 = temp;
	}
}
