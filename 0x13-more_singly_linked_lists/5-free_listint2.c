#include "lists.h"

/**
 * free_listint2 - frees a listint_t linked list
 * @head: pointer to pointer to head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		while ((tmp = temp) != NULL)
		{
			temp = temp->next;
			free(tmp);
		}
		*head = NULL;
	}
}


