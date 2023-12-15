#include "main.h"
/**
 * _realloc - function that reallocates memory for a buffer.
 * @buf: the buffer whose size is to be reallocated.
 * @old: the old size of the buffer.
 * @new: the new size that the buffer should be in.
 *
 * Return: return pointer to newly allocated buffer.
 */
char *_realloc(void *buf, size_t old, size_t new)
{
	char *ptr, *oldptr;
	unsigned int min, i;

	ptr = NULL;

	if (buf == NULL)
	{
		ptr = malloc(new);
		return (ptr);
	}
	else if (buf == 0)
	{
		free(buf);
		return (NULL);
	}
	else if (new == old)
	{
		return (buf);
	}
	else
	{
		oldptr = buf;

		if (new > old)
			min = old;
		else
			min = new;

		ptr = malloc(new);
		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < min; i++)
			ptr[i] = oldptr[i];
	}
	free(buf);
	return (ptr);
}
