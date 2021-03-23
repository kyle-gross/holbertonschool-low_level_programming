#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to list
 * @index: index to delete
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *temp;

	if (!*head)
		return (-1);
	if (index >= listint_len(*head))
		return (-1);
	temp = *head;
	if (index > 0)
	{
		while (--index)
		{
			prev = temp;
			temp = temp->next;
		}
		prev->next = temp->next;
		free(temp);
	}
	else
	{
		*head = temp->next;
		free(temp);
	}
	return (1);
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
