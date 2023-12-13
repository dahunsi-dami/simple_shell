#include "main.h"

/**
 * _executecommand - executes a command using fork and execve.
 * @hargv: array of arguments for the command.
 * @envp: environment variables.
 *
 * Return: the path of the executed command.
 */
char *_executecommand(char **hargv, char *envp[])
{
	char *path;
	int fd;

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
			perror(hargv[0]);
			exit(EXIT_FAILURE);
		}
	}

	wait(NULL);
	return (path);
}
