#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list.
* @head: double pointer to the head of the doubly linked list.
* @n: the data to store in the new node.
*
* Return: address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* Adjust the previous head's prev pointer, if the list is not empty */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Update the head pointer to the new node */
	*head = new_node;

	return (new_node);
}
