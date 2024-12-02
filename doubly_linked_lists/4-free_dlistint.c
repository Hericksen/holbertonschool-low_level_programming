#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/* Travers the doubly linked list */
	while (head != NULL)
	{
		/* Our temp variable become the head of the doubly linked list*/
		temp = head;
		/* Then the head go to the next head*/
		head = head->next;
		/* Finally we free all allocated memory*/
		free(temp);
	}

}
