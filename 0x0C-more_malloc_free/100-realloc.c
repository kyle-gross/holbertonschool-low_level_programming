#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previous memory
 * @old_size: size (in bytes) previously allocated to ptr
 * @new_size: new size of memory
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}
	nptr = ptr;
	free(ptr);
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	return (nptr);
}
