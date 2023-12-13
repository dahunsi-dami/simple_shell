#include "main.h"
/**
 * _cleanupmemory - cleans up allocated memory for path & directory arrays.
 * @path: path of the executable file.
 * @directories: array of directories.
 *
 * Return: unnecessary as function returns void.
 */
void _cleanupmemory(char *path, char *directories[])
{
	int i;

	free(path);
	for (i = 0; directories[i] != NULL; i++)
		free(directories[i]);
	free(directories);
}
