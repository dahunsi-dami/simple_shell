#include "main.h"

/**
 * checkcommandindirectory - Check if the command exists in a given directory.
 * @directory: The directory to search for the command.
 * @command: The command to check for.
 *
 * Return: The full path of the command if found, otherwise NULL.
 */
char *_checkcommandindirectory(const char *directory, const char *command)
{
    char *path = NULL;
    int length = strlen(directory) + strlen(command) + 2;

    path = malloc(sizeof(char) * length);
    if (path == NULL) {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    if (directory[strlen(directory) - 1] == '/')
	{
        snprintf(path, length, "%s%s", directory, command);
    } else
	{
        snprintf(path, length, "%s/%s", directory, command);
    }

    if (access(path, F_OK) == 0)
	{
        return (path);
    }

    free(path);
    return (NULL);
}
