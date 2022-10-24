#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n) of a listint_t linked list
 * @head: pointer to head node of list
 *
 * Return: sum, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	unsigned int j;

	if (head == NULL)
		return (0);
	for (j = 0; head != NULL; j++)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}


