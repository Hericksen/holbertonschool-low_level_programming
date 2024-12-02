#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: pointer to the head of doubly linked the list
 *
 * Return: number of elements in a doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t element_count = 0;

	/* Travers the doubly linked list */
	while (h != NULL)
	{
		/* Increments the element count */
		element_count++;
		/* Move to the next node */
		h = h->next;
	}

	return (element_count);
}
