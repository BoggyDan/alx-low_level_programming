#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to pointer to list
 */
void free_list(list_t *head)
{
	list_t *list = NULL;

	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}

