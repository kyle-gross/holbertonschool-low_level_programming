#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to start of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (!*head)
		return;
	while (temp)
	{
		*head = temp;
		temp = temp->next;
		free(*head);
	}
	*head = NULL;
}
