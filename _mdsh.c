#include "main.h"
/**
 * main - prompts user & executes command inputted.
 * @argc: the number of arguments passed.
 * @argv: a 1D array of arguments passed.
 * @envp: a 1D array of environment variable.
 * Return: always success (0).
 */
int main(int argc, char *argv[], char *envp[])
{
	char *buf, *bufc;
	ssize_t nchar;
	size_t n;
	const char *delim;
	char **hargv;
	int i, term;
	(void)argc;
	delim = "\n";

	term = isatty(STDIN_FILENO);
	while (1)
	{
		buf = NULL;
		bufc = NULL;

		nchar = _readinput(term, &buf, &n);
		_checkgetfail(nchar, buf, argv, stdin);
		bufc = malloc(sizeof(char) * (nchar + 1));
		if (bufc == NULL)
		{
			perror(argv[0]);
			continue;
		}
		_strcpy(bufc, buf);
		hargv = _tokenizeinput(buf, bufc, delim);
		if (hargv == NULL)
		{
			perror(argv[0]);
			continue;
		}
		else
		{
			_executecommand(hargv, envp, argv);
			for (i = 0; hargv[i] != NULL; i++)
				free(hargv[i]);
			free(hargv);
		}
		free(buf);
	}
	return (0);
}
