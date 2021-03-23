#include "lists.h"
/**
 * cyclecheck - checks for cycle in linked list
 * @head: pointer to list
 * Return: 0 if success 1 if fail
 */
const listint_t *cyclecheck(const listint_t *head)
{
	const listint_t *slow, *fast;
	
	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (slow->next);
	}
	return (NULL);
}
/**
 * print_listint_safe - prints a listint_t list
 * @head: pointer to list
 * Return: number of nodes in the list or 98 if fail
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *temp2 = NULL;
	size_t count = 0;

	if (!head)
		return (98);
	temp2 = cyclecheck(head);
	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		if (temp == temp2)
			break;
		temp = temp->next;
	}
	if (temp2)
	{
		printf("-> [%p] %d\n", (void *)temp2, temp2->n);
		return (98);
	}
	return (count);
}
