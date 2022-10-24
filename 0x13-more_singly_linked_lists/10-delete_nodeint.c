#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the at an index of a listint_t linked list
 * @head: pointer to point to head node
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeds, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur = *head, *temp;
	unsigned int j;

	if (!head || !(*head))
		return (-1);
	if (!index)
	{
		*head = cur->next;
		free(cur);
		return (1);
	}
	for (j = 0; j < index - 1; j++)
	{
		if (!cur)
			return (-1);
		cur = cur->next;
	}
	temp = cur->next->next;
	free(cur->next);
	cur->next = temp;

	return (1);
}

