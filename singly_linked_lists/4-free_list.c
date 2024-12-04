#include "lists.h"

/**
* free_list - frees a linked list of type list_t.
* @head: pointer to the head of the list to be freed.
*/

void free_list(list_t *head)
{
	list_t *next_node;

	while (head != NULL)
	{
		/* Save the next node */
		next_node = head->next;
		/* Free the dynamically allocated string */
		free(head->str);
		/* Free the current node */
		free(head);
		/* Move to the next node */
		head = next_node;
	}
}
