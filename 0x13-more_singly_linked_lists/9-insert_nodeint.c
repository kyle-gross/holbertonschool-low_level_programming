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
	if (idx == 0)
		new_node = add_nodeint(head, n);
	else if (idx == listint_len(*head) - 1)
		new_node = add_nodeint_end(head, n);
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
/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: pointer to head of list
 * @n: new integer
 * Return: new node or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *traverse;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (!*head)
	{
		*head = temp;
		return (temp);
	}
	traverse = *head;
	while (traverse->next)
		traverse = traverse->next;
	traverse->next = temp;
	return (temp);
}
/**
 * add_nodeint - adds a node to the beginning of a list
 * @head: pointer to head of list
 * @n: number to add to list
 * Return: new node or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
