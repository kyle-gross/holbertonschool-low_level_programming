#include "lists.h"
/**
 * cyclecheck - checks for cycle in linked list
 * @head: pointer to list
 * Return: 0 if success 1 if fail
 */
const listint_t *cyclecheck(const listint_t *head)
{
	const listint_t *slow, *fast;

	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			fast = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
/**
 * dupcheck - checks for duplicate address
 * @arr: array of addresses
 * @temp: temp pointer from function
 * Return: 0 if no duplicate, 1 if there is a duplicate
 */
int dupcheck(const listint_t **arr, const listint_t *temp)
{
	size_t i;

	for (i = 0; arr[i]; i++)
	{
		if (temp == arr[i])
			return (1);
	}
	return (0);
}
/**
 * print_listint_safe - prints a listint_t list
 * @head: pointer to list
 * Return: number of nodes in the list or 98 if fail
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *temp2 = NULL, *arr[2000];
	size_t count = 0;

	if (!head)
		return (count);
	if (!*head)
		exit(98);
	temp2 = cyclecheck(head);
	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		arr[count] = temp;
		count++;
		if (dupcheck(arr, temp->next) == 1)
			break;
		temp = temp->next;
	}
	if (temp2)
		printf("-> [%p] %d\n", (void *)temp2, temp2->n);
	return (count);
}
