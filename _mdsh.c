#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * main - a function that prints a dollar sign.
 * @ac: the number of arguments passed.
 * @av: a 1D array of arguments passed.
 *
 * Return: always success (0).
 */
int main(int ac, char *av[])
{
	char *envp[] = {"PATH=/bin", (char *)0};
	(void)ac;

	execve(av[1], av, envp);

	return (0);
}
