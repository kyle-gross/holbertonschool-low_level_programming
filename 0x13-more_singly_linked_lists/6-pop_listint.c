#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to head of list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (!*head)
		return (0);
	temp = *head;
	num = temp->n;
	*head = temp->next;
	free(temp);
	return (num);
}
