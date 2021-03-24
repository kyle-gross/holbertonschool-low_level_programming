#include "lists.h"
/**
 * cyclecheck2 - checks for cycle in linked list
 * @head: pointer to list
 * Return: 0 if success 1 if fail
 */
listint_t *cyclecheck2(listint_t *head)
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
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
/**
 * free_listint_safe - frees a list that contains a loop
 * @h: pointer to list
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *trav, *temp2 = NULL;
	size_t count = 0, findstart = 0;

	temp2 = cyclecheck2(*h);
	trav = *h;
	if (h)
	{
		while (trav)
		{
			if (temp2)
				if (trav == temp2 && findstart == 0)
					findstart = 1;
			temp = trav->next;
			free(trav);
			trav = temp;
			count++;
			if (trav == temp2 && findstart == 1)
				break;
		}
	}
	*h = NULL;
	return (count);
}
