#include "main.h"
/**
 * _appendtopath - finds the directory of a relative path.
 * @tokens: the 1D array containing the parsed tokens.
 * @path: the string to store the appended new path.
 * @argv: the 1D array of command line arguments.
 * Return: the new path or NULL.
 */
char *_appendtopath(char **tokens, char *path, char *argv[])
{
	int l, m, tlen, alen;

	l = 0;
	tlen = _strlen(tokens[l]);
	alen = _strlen(argv[0]);

	for (l = 0; tokens[l] != NULL; l++)
	{
		path = NULL;

		m = _strlen(tokens[l]) - 1;
		if (tokens[l][m] == '/')
		{
			path = malloc(sizeof(char) * (tlen + (alen + 1)));
			if (path == NULL)
			{
				perror("Path allocation failed");
				return (NULL);
			}
			_strcpy(path, tokens[l]);
			_strcat(path, argv[0]);
		}
		else
		{
			path = malloc(sizeof(char) * (tlen + (alen + 2)));
			if (path == NULL)
			{
				perror("Path allocation failed");
				return (NULL);
			}
			_strcpy(path, tokens[l]);
			_strcat(path, "/");
			_strcat(path, argv[0]);
		}
		if (access(path, F_OK) == 0)
			return (path);
		free(path);
		path = NULL;
	}
	return (NULL);
}
