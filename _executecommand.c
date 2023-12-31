#include "main.h"

/**
 * _executecommand - executes a command using fork and execve.
 * @hargv: array of arguments for the command.
 * @envp: environment variables.
 * @argv: 1D array containg command line arguments.
 *
 * Return: the path of the executed command.
 */
void _executecommand(char **hargv, char *envp[], char *argv[])
{
	int fd;
	char *path;

	path = _checkcmdexists(hargv, envp);

	fd = fork();

	if (fd == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (fd == 0)
	{
		if (execve(path, hargv, envp) == -1)
		{
			perror(argv[0]);
			exit(EXIT_FAILURE);
		}
	}

	wait(NULL);

	if (path != NULL)
		free(path);
}
