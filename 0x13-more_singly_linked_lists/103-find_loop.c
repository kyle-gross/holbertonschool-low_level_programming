#include "lists.h"
/**
 * find_loop - finds a cycle in a linked list
 * @head: pointer to list
 * Return: address where cycle starts or NULL if no loop
 */
listint_t *find_listint_loop(const listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (slow);
	}
	return (NULL);
}
