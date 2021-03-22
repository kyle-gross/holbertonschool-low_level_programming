#include "lists.h"
/**
 * sum_listint - sums the data of a list
 * @head: pointer to list
 * Return: 0 if empty, or sum otherwise
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
