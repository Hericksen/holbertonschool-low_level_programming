#include "lists.h"

/**
* free_list - frees a linked list of type list_t.
* @head: pointer to the head of the list to be freed.
*/

void free_list(list_t *head)
{
	list_t *current;
	list_t *next_node;

	current = head;

	while (current != NULL)
	{
		/* Save the next node */
		next_node = current->next;
		/* Free the dynamically allocated string */
		free(current->str);
		/* Free the current node */
		free(current);
		/* Move to the next node */
		current = next_node;
	}
}
