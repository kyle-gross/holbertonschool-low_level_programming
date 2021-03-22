#include "lists.h"
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
