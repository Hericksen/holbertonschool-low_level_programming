#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlisint_t list
 * @h: pointer to the head of doubly linked the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	/* Travers the doubly linked list */
	while (h != NULL)
	{
		/* Prints the data at the current node */
		printf("%d\n", h->n);
		/* Increments the node count */
		node_count++;
		/* Move to the next node */
		h = h->next;
	}

	return (node_count);
}
