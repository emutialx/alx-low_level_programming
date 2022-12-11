#include "lists.h"

/**
 * free_listint2 - a function that frees the node starting from the first node
 * @head: head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;

while (*head)
{
tmp = (*head)->next;
free(*head);
(*head) = tmp->next;
}
}
