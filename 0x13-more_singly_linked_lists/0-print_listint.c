#include "lists.h"
/**
 * print_listint - prints a linked list
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (count);
	while (h->next != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	count++;
	printf("%d\n", h->n);
	return (count);
}
