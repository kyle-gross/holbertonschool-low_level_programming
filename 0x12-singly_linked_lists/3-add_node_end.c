#include "lists.h"
/**
 * add_node_end - adds a node to the end of a list
 * @head: head of list
 * @str: new string
 * Return: address of new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *traverse;

	if (!*head)
	{
		temp = malloc(sizeof(list_t));
		if (!temp)
			return (NULL);
			temp->str = strdup((char *)str);
		if (!temp->str)
		{
			free(temp);
			return (NULL);
		}
		temp->len = (unsigned int)_strlen(temp->str);
		temp->next = NULL;
		*head = temp;
		return (temp);
	}
	if (!str)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->str = strdup((char *)str);
	if (!temp->str)
	{
		free(temp);
		return (NULL);
	}
	temp->len = (unsigned int)_strlen(temp->str);
	temp->next = NULL;
	traverse = *head;
	while (traverse->next)
		traverse = traverse->next;
	traverse->next = temp;
	return (temp);
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
