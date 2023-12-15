#include "main.h"
/**
 * _checkgetfail - checks if getline function fails.
 * @nchar: the return value of the getline function.
 * @buf: the buffer created by getline function.
 * @argv: the name of the shell program.
 * @stream: stream where input is coming from.
 *
 * Return: unnecessary as function returns void.
 */
void _checkgetfail(ssize_t nchar, char *buf, char *argv[], FILE *stream)
{
	if (nchar == -1)
	{
		if (feof(stream))
		{
			free(buf);
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror(argv[0]);
			free(buf);
			exit(EXIT_FAILURE);
		}
	}
	if (_strcmp(buf, "exit") == 0)
	{
		free(buf);
		exit(EXIT_SUCCESS);
	}
}
