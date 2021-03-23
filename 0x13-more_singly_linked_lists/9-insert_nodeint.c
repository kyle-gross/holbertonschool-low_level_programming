#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to list
 * @idx: index of the list where the new node will be added
 * @n: value to assign to node
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav, *new_node;

	if (idx >= listint_len(*head))
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	trav = *head;
	while (--idx)
	{
		trav = trav->next;
	}
	new_node->next = trav->next;
	trav->next = new_node;
	return (new_node);
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
