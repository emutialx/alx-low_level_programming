#include "lists.h"

/**
 * free_listint2: a function that frees the node
 * @h: head of the list
 *
 * Return:free nodes
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head)
	{
		tmp = (*head)->next;
		free((*head));
		(*head) = tmp->next;
	}
}
