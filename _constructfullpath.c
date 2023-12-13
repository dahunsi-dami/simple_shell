#include "main.h"
/**
 * _constructfullpath - appends directory & filename to form full path.
 * @directory: the directory listing in the PATH array.
 * @filename: the name of the executable.
 *
 * Return: returns the full path.
 */
char *_constructfullpath(char *directory, char *filename)
{
	char *path;

	if (directory[_strlen(directory) - 1] == '/')
	{
		path = malloc(sizeof(char) * (_strlen(directory) + _strlen(filename) + 1));
	}
	else
	{
		path = malloc(sizeof(char) * (_strlen(directory) + _strlen(filename) + 2));
	}

	if (path == NULL)
	{
		perror("Path allocation failed");
		return (NULL);
	}

	_strcpy(path, directory);
	if (directory[_strlen(directory) - 1] != '/')
		_strcat(path, "/");
	_strcat(path, filename);
	return (path);
}
