#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: head of linked list
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (!h)
		return (count);
	while (h->next)
	{
		count++;
		h = h->next;
	}
	count++;
	return (count);
}
