#include "main.h"
/**
 * _mallocchar - dynamically allocates memory for a string copy.
 * @_envp: the string to be copied.
 * @_envpc: the pointer to be used in the dynamic allocation.
 * @n: the number of bytes needed for the allocation.
 * Return: pointer to the allocated space, else NULL.
 */
char *_mallocchar(char *_envp, char *_envpc, int n)
{
	_envpc = malloc(sizeof(char) * (_strlen(_envp) + 1));
	if (_envpc == NULL)
	{
		free(_envp);
		perror("Error");
		return (NULL);
	}

	return (_envpc);
}
