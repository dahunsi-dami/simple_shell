#include "main.h"
/**
 * _findpathenv - finds the PATH variable's value in envp.
 * @envp: pointer to array that stores environment variables.
 * @_envp: string to store the copy of PATH's value.
 * Return: the PATH's value or NULL.
 */
char *_findpathenv(char *envp[], char *_envp)
{
	int i;

	for (i = 0; envp[i]; i++)
	{
		if (_strncmp(envp[i], "PATH=", 5) == 0)
		{
			_envp = malloc(sizeof(char) * (_strlen(envp[i]) - 4));
			if (_envp == NULL)
			{
				perror("Error");
				return (NULL);
			}
			_strcpy(_envp, (envp[i] + 5));
			break;
		}
	}
	return (_envp);
}
