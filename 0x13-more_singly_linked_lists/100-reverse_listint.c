#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to list
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *trav;

	if (!*head)
		return (NULL);
	trav = *head;
	trav = trav->next;
	(*head)->next = NULL;
	while (trav)
	{
		temp = trav->next;
		trav->next = *head;
		*head = trav;
		trav = temp;
	}
	return (*head);
}
