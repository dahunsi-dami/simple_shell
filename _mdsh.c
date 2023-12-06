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

	(void)ac, (void)av;

	while (1)
	{
		_write("micdre:~$ ");

		nchar = getline(&buf, &n, stdin);

		_write(buf);
	}

	return (0);
}
