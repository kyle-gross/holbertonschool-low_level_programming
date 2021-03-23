#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to list
 * @index: index to return
 * Return: index or NULL if no list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int temp_index = 0;

	if (!head)
		return (NULL);
	if (index >= listint_len(head))
		return (NULL);
	temp = head;
	while (temp_index < index)
	{
		temp = temp->next;
/*		if (temp_index + 1 < index && temp->next == NULL)
			return (NULL);
*/		temp_index++;
	}
	return (temp);
}
/**
 * listint_len - returns the length of a linked list
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (count);
	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	count++;
	return (count);
}
