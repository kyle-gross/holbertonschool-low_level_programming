#include "lists.h"
/**
 * find_listint_loop - finds a cycle in a linked list
 * @head: pointer to list
 * Return: address where cycle starts or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			fast = head;
			while (slow != head)
			{
				slow = slow->next;
				head = head->next;
			}
			return (head);
		}
	}
	return (NULL);
}
