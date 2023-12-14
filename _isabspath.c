#include "main.h"
/**
 * _isabspath - checks if the path given to it is absolute.
 * @argv: the 1D array of arguments passed to the prompt.
 * @path: the string to store the absolute path.
 * Return: path if it's absolute, else NULL.
 */
char *_isabspath(char **argv, char *path)
{
	struct stat st;

	if (stat(argv[0], &st) == 0)
	{
		path = malloc(_strlen(argv[0]) + 1);
		if (path == NULL)
			return (NULL);
		_strcpy(path, argv[0]);
		return (path);
	}

	return (NULL);
}
