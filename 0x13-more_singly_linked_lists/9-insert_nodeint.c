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
	unsigned int temp_index = 0;

	if (!*head)
		return (NULL);
	trav = *head;
	while (temp_index < idx)
	{
		trav = trav->next;
		if (temp_index + 1 < idx && trav->next == NULL)
			return (NULL);
		temp_index++;
	}
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = trav;
	trav = *head;
	for (temp_index = 0; temp_index < idx - 1; temp_index++)
		trav = trav->next;
	trav->next = new_node;
	return (new_node);
}
