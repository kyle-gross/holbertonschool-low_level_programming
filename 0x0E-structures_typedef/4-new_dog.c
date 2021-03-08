#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - counts length of a string
 * @s: the string to count
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * _strdup - copies a string
 * @str: the string to copy
 * Return: NULL if string == NULL or pointer to copied string
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0;

	if (str == NULL)
		return (NULL);

	dup = (char *)malloc(_strlen(str) + 1);

	if (dup == NULL)
		return (NULL);

	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: NULL if fail, or new struct new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog2 = malloc(sizeof(struct dog));

	if (dog2 == NULL)
		return (NULL);
	dog2->name = _strdup(name);
	if (dog2->name == NULL)
	{
		free(dog2);
		return (NULL);
	}
	dog2->age = age;
	dog2->owner = _strdup(owner);
	if (dog2->owner == NULL)
	{
		free(dog2);
		return (NULL);
	}
	return (dog2);
}
