#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_list linked list
 * @head: pointer to pointer to head node
 *
 * Return: the head node's data (n), 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *temp;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	temp = *head;
	head_node = temp->n;
	tmp = temp->next;
	free(temp);
	*head = tmp;

	return (head_node);
}

