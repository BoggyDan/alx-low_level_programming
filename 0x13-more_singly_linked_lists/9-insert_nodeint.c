#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to head node of linked list
 * @idx: index of the list where the new node should be added
 * @n: node to be inserted
 *
 * Return: address of the new node, NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *tmp;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx != 0)
		for (j = 0; j < (idx - 1) && tmp != NULL; j++)
			tmp = tmp->next;

	if (tmp == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = tmp->next;
		tmp->next = new;
	}

	return (new);
}

