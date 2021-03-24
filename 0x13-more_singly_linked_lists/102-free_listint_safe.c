#include "lists.h"
/**
 * dupcheck - checks for duplicate address
 * @arr: array of addresses
 * @temp: temp pointer from function
 * Return: 0 if no duplicate, 1 if there is a duplicate
 */
int dupcheck(const listint_t **arr, const listint_t *temp)
{
	int i;

	for (i = 0; arr[i]; i++)
	{
		if (temp == arr[i])
			return (1);
	}
	return (0);
}
/**
 * free_listint_safe - frees a list that contains a loop
 * @h: pointer to list
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *arr[2000];
	size_t count = 0;

	if (h)
	{
		while (*h)
		{
			temp = *h;
			arr[count] = temp;
			*h = (*h)->next;
			free(temp);
			count++;
			if (dupcheck(arr, (*h)->next) == 1)
				break;
		}
	}
	return (count);
}
