#include "main.h"
/**
 * _exitshell - function to exit the shell with a message.
 * @buf: pointer to the buffer to be freed.
 *
 * Return: unnecessary as function returns void.
 */
void _exitshell(char *buf)
{
	if (buf != NULL)
		free(buf);
	_write("Exiting hsh...\n");
	exit(EXIT_SUCCESS);
}
