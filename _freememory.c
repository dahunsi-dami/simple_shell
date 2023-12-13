#include "main.h"

/**
 * _freememory - frees allocated memory for various variables.
 * @buf: input buffer
 * @bufc: copied input buffer
 * @hargv: array of command arguments
 * @path: path of the command
 */

void _freememory(char *buf, char *bufc, char **hargv, char *path)
{
	int j;

	free(buf);
	free(bufc);

	if (hargv != NULL)
	{
		for (j = 0; hargv[j]; j++)
			free(hargv[j];
		free(hargv);
	}

	if (path != NULL)
		free(path);
}
