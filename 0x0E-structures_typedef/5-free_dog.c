#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: the dog to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(dog2->name);
		free(dog2->owner);
		free(dog2);
	}
}
