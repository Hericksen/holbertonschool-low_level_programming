#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointers to the head of the list
 * @idx: index of the list where the node should be added
 * @n: data of the node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *temp = *h;
	unsigned int i = 0;

	if (h == NULL) /* If empty list */
		return (NULL);

	new_node = malloc(sizeof(dlistint_t)); /* Create a new node */
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0) /* Insert at the head */
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (temp && i < idx - 1) /* Traverse to the node at position (idx - 1) */
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL) /* Return null of index out of bounds */
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next; /* Set the next of new node to temp */
	new_node->prev = temp; /* Set the prev of new node to temp */
	if (temp->next) /* Update the next node's prev pointer */
		temp->next->prev = new_node;

	temp->next = new_node;
	return (new_node);
}
