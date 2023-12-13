#include "main.h"
/**
 * _findcommandpath - Find the full path of a command.
 * @argv: The command-line arguments.
 * @envp: The environment variables.
 * Return: The full path of the command if found, otherwise NULL.
 */
char *_findcommandpath(char **argv, char *envp[])
{
	struct stat st;
	char *env_path = NULL;
	char *env_path_copy = NULL;
	char *path = NULL;

	if (stat(argv[0], &st) == 0)
	{
		path = strdup(argv[0]);
		if (path == NULL)
		{
			perror("Error");
			exit(EXIT_FAILURE);
		}
		return (path);
	}

	for (int i = 0; envp[i]; i++)
	{
		if (strncmp(envp[i], "PATH=", 5) == 0)
		{
			env_path = strdup(envp[i] + 5);
			if (env_path == NULL)
			{
				perror("Error");
				exit(EXIT_FAILURE);
			}
			break;
		}
	}

	env_path_copy = strdup(env_path);
	if (env_path_copy == NULL)
	{
		perror("Error");
		free(env_path);
		exit(EXIT_FAILURE);
	}

	path = searchcommandinpath(argv[0], env_path_copy);

	free(env_path);
	free(env_path_copy);
	return (path);
}
