#include "main.h"
/**
 * _checkcmdexists - checks if command entered exists as an executable.
 * @argv: pointer to array containing the arguments entered.
 * @envp: pointer to the environment variables.
 *
 * Return: path to the executable if it exists.
 */
char *_checkcmdexists(char **argv, char *envp[])
{
	char *path = _checkfileexists(argv[0]);

	if (path != NULL)
		return (path);
	char *pathenv = _extractpathfromenv(envp);

	if (pathenv == NULL)
		return (NULL);
	char **directories;
	int numdirectories = _splitpath(pathenv, &directories);

	free(pathenv);
	if (numdirectories == -1)
		return (NULL);
	path = _findexecutableinpath(directories, argv[0]);
	_cleanupmemory(NULL, directories);

	return (path);
}
