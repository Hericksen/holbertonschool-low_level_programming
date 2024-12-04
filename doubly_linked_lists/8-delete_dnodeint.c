#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at a given index
* in a dlistint_t linked list.
* @head: double pointer to the head of the doubly linked list.
* @index: the index of the node to delete (starting from 0).
*
* Return: 1 if successful, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);

	/* Handle deletion of the head node */
	if (index == 0)
	{
		*head = temp->next;
		if (*head) /* Update new head's prev pointer */
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse to the node at the specified index */
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	/* If the node to delete does not exist */
	if (!temp)
		return (-1);

	/* Update pointers to unlink the node */
	if (temp->next)
		temp->next->prev = temp->prev;
	if (temp->prev)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
