#include "dog.h"
#include <stdlib.h>
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
	dog2->name = name;
	if (dog2->name == NULL)
	{
		free(dog2);
		return (NULL);
	}
	dog2->age = age;
	dog2->owner = owner;
	if (dog2->owner == NULL)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	return (dog2);
}
