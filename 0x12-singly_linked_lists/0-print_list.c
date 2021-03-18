#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints a linked list
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	size_t count = 0;

	for (i = 0; h->next != NULL; i++)
	{
		count++;
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	count++;
	if (h->str)
		printf("[%u] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	return (count);
}
