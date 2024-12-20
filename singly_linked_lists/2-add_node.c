#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: double pointer to the head of the list.
* @str: string to be duplicated and stored in the new node.
*
* Return: address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	/* Allocate memory for the new node */
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int length = 0;


	if (head == NULL || new_node == NULL)
		return (NULL);

	/* Duplicate the input string */
	new_node->str = strdup(str);

	/* Increase a length variable because we can't use strlen function */
	while (str[length])
		length++;

	/* Compute the length of the string */
	new_node->len = length;

	/* Insert the new node at the beginning of the list */
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
