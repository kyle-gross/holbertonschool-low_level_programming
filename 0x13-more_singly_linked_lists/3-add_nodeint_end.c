#include "lists.h"
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
