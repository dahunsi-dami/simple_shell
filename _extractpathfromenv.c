#include "main.h"
/**
 * _extractpathfromenv - extract PATH environment variable from envp.
 * @envp: array that contains list of environment variables.
 *
 * Return: return the path or NULL.
 */
char *_extractpathfromenv(char *envp[])
{
	int i;
	char *path;

	for (i = 0; envp[i]; i++)
	{
		if (_strncmp(envp[i], "PATH=", 5) == 0)
		{
			path = malloc(sizeof(char) * (_strlen(envp[i]) - 4));
			if (path == NULL)
			{
				perror("Error");
				return (NULL);
			}
			_strcpy(path, (envp[i] + 5));
			return (path);
		}
	}
	return (NULL);
}
