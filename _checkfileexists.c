#include "main.h"
/**
 * _checkfileexists - checks if a file exists.
 * @filename: the name of the file to check.
 *
 * Return: return the path of the file or NULL.
 */
char *_checkfileexists(char *filename)
{
	struct stat st;
	char *path;

	if (stat(filename, &st) == 0)
	{
		path = malloc(_strlen(filename) + 1);
		_strcpy(path, filename);
		return (path);
	}

	return (NULL);
}
