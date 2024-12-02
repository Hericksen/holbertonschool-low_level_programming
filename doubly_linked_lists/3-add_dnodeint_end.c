#include "lists.h"


/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list.
* @head: a double pointer to the head of the doubly linked list.
* @n: the data to store in the new node.
*
* Return: the address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the end of the list */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Add the new node at the end */
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
