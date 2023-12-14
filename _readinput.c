#include "main.h"
/**
 * _readinput - function reads input from the user.
 * @term: flag that indicates if input is from terminal.
 * @buf: pointer to buffer holding input.
 * @n: pointer to size of the buffer.
 *
 * Return: the number of characters read.
 */
ssize_t _readinput(int term, char **buf, size_t *n)
{
	if (term != 0)
		_promptuser();
	return (getline(buf, n, stdin));
}
