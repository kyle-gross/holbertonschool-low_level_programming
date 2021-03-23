#include "lists.h"
/**
 * new_add_nodeint - adds a node to the beginning of a list
 * @head: pointer to head of list
 * @n: number to add to list
 * Return: new node or NULL if fail
 */
listint_t *new_add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
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

	if (!head)
		return (NULL);
	if (idx >= listint_len(*head))
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	if (idx == 0)
	{
		new_node = new_add_nodeint(head, n);
	}
	else
	{
		new_node->n = n;
		trav = *head;
		while (--idx)
		{
			trav = trav->next;
		}
		new_node->next = trav->next;
		trav->next = new_node;
	}
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
