#include "main.h"
/**
 * _findexecutableinpath - finds executable in directories of PATH variable.
 * @directories: array containing directories of PATH variable.
 * @filename: name of the executable.
 *
 * Return: returns the path or NULL.
 */
char *_findexecutableinpath(char *directories[], char *filename)
{
	char *path = NULL;
	int i;

	for (i = 0; directories[i] != NULL; i++)
	{
		path = _constructfullpath(directories[i], filename);

		if (access(path, F_OK) == 0)
			return (path);
		free(path);
		path = NULL;
	}
	return (NULL);
}
