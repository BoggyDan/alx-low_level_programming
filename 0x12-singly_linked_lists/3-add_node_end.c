#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to linked list
 * @str: pointer to str to be added
 *
 * Return: the address of the new element, NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (*head);
}

