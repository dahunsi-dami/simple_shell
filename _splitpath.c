#include "main.h"
/**
 * _splitpath - splits PATH variable into array of directories.
 * @path: the full value of PATH.
 * @directories: the count tokens from _splitstring.
 *
 * Return: returns number of tokens or -1.
 */
int _splitpath(char *path, char ***directories)
{
	return (_splitstring(path, ":", directories));
}
