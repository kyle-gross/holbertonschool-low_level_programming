#include "lists.h"
/**
 * add_node - adds a node to a linked list
 * @head: the head of the linked list
 * @str: the string to be assigned to the new node
 * Return: address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (!head)
		return (*head);
	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = (unsigned int)_strlen(temp->str);
	temp->next = *head;
	*head = temp;
	free(temp);
	return (*head);
}
/**
 * _strlen - gets length of string
 * @s: the string
 * Return: character count
 */
int _strlen(char *s)
{
	int i = 0;

	while (s && s[i])
		i++;
	return (i);
}
