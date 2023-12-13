#include "main.h"
/**
 * _searchcommandinpath - Search for the command in the directories
 * listed in the PATH variable.
 * @command: The command to search for.
 * @path: The PATH variable containing a list of directories.
 *
 * Return: The full path of the command if found, otherwise NULL.
 */
char *_searchcommandinpath(const char *command, const char *path)
{
	char *token = NULL;
	char *path_copy = strdup(path);
	char *result = NULL;

	if (path_copy == NULL)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}

	token = strtok(path_copy, ":");

	while (token != NULL)
	{
		result = check_command_in_directory(token, command);
		if (result != NULL)
		{
			free(path_copy);
			return (result);
		}
		token = strtok(NULL, ":");
	}

	free(path_copy);
	return (NULL);
}
