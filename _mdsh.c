#include "main.h"
/**
 * main - prompts user & executes command inputted.
 * @ac: the number of arguments passed.
 * @av: a 1D array of arguments passed.
 *
 * Return: output of command executed or 0 for success.
 */
int main(int ac, char *av[])
{
	char *buf;
	ssize_t nchar;
	size_t n;
	char *bufc;

	(void)ac, (void)av;

	while (1)
	{
		_write("micdre:~$ ");

		nchar = getline(&buf, &n, stdin);

		_write(buf);

		if (nchar == -1)
		{
			if (feof(stdin))
			{
				_write("Exiting shell...\n");
				free(buf);
				return (EXIT_SUCCESS);
			}
			else
			{
				perror("Line not read\n");
				free(buf);
				_putchar('\n');
				return (EXIT_FAILURE);
			}
		}

		if (_strcmp(buf, "exit\n") == 0)
		{
			free(buf);
			return (EXIT_SUCCESS);
		}

		bufc = malloc(sizeof(char) * (nchar + 1));
		if (bufc == NULL)
		{
			free(buf);
			free(bufc);
			perror("Buffer copying failed");
			return (EXIT_FAILURE);
		}
	}

	return (0);
}
