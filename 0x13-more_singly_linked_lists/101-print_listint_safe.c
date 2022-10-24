#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: pointer to head of linked list
 */
void free_listp(listp_t **head)
{
	listp_t *tmp, *cur;

	if (head != NULL)
	{
		cur = *head;
		while ((tmp = cur) != NULL)
		{
			cur = cur->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a listint_t linked list, even lists with a loop
 * @head: pointer to head node of linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_c = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (node_c);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_c++;
	}

	free_listp(&hptr);

	return (node_c);
}

