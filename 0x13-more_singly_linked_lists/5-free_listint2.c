#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to start of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
