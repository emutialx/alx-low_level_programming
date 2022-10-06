#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Allocates space of `new_size`
 * bytes and moves old data to new space.
 * @ptr: Pointer to the old memory space
 * @old_size: The size in bytes of the old memory space
 * @new_size: The size in bytes of the new memory space
 *
 * Return: Pointer to the new memory space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		*((unsigned char *)new + i) = *((unsigned char *)ptr + i);
	return (new);
}
