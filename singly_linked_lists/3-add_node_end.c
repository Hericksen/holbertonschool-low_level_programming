#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: double pointer to the head of the list
* @str: string to be added to the list (duplicated)
*
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	unsigned int length = 0;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));

	if (str == NULL || new_node == NULL)
		return (NULL);

	/* Duplicate the string and set the values for the new node */
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	
	while (str[length])
		length++;

	new_node->next = NULL;

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

	/* Link the new node at the end */
	temp->next = new_node;

	return (new_node);
}
