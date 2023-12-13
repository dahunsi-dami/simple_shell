#include "main.h"
/**
 * main - prompts user & executes command inputted.
 * @argc: the number of arguments passed.
 * @argv: a 1D array of arguments passed.
 * @envp: a 1D array of environment variable.
 *
 * Return: always success (0).
 */
int main(int argc, char *argv[], char *envp[])
{
	char *buf, *path;
	ssize_t nchar;
	size_t n;
	char *bufc;
	int term;
	const char *delim;
	char **hargv;

	(void)argc;

	delim = " \n";
	term = isatty(STDIN_FILENO);

	while (1)
	{
		buf = NULL;
		bufc = NULL;
		path = NULL;

		nchar = _readinput(term, &buf, &n);
		if (nchar == -1)
		{
			if (feof(stdin))
			{
				_exitshell(buf);
			}
			else
			{
				perror("Line not read\n");
				_freememory(buf, bufc, NULL, NULL);
				exit(EXIT_FAILURE);
			}
		}
		if (_strcmp(buf, "exit\n") == 0)
		{
			_freememory(buf, bufc, NULL, NULL);
			exit(EXIT_SUCCESS);
		}
		bufc = malloc(sizeof(char) * (nchar + 1));
		if (bufc == NULL)
		{
			_freememory(buf, bufc, NULL, NULL);
			perror("Buffer copying failed");
			continue;
		}
		_strcpy(bufc, buf);
		*hargv = _tokenizeinput(buf, delim);

		if (hargv == NULL)
		{
			_freememory(buf, bufc, NULL, NULL);
			perror("Tokenization failed");
			continue;
		}
		path = _executecommand(hargv, envp);
		_freememory(buf, bufc, hargv, path);
	}
	return (0);
}
