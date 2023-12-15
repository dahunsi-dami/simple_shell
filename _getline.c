#include "main.h"
/**
 * _getline - dynamically allocs size for a string input.
 * @buf: The address of the buffer where the string will be stored.
 * @n: what the size of the dynamically allocced space is.
 * @fd: the stream where the input will come from.
 * Return: the size of the dynamically allocced space.
 */
ssize_t _getline(char **buf, size_t *n, FILE *fd)
{
	size_t MAX_LEN, cur_len, NEW_LEN;
	char *buffer;
	int c;

	*n = 0;
	MAX_LEN = 10;
	cur_len = 0;
	NEW_LEN = 10;

	buffer = malloc(sizeof(char) * MAX_LEN);
	if (buffer == NULL)
		return (-1);
	if (buf == NULL || n == NULL || fd == NULL)
	{	free(buffer);
		return (-1); }
	*buf = NULL;
	while ((c = read(fd->_fileno, buffer + cur_len, 1)) > 0)
	{
		cur_len += c;
		if (cur_len == MAX_LEN)
		{	NEW_LEN *= 2;
			buffer = _realloc(buffer, MAX_LEN, NEW_LEN); }
		if (buffer[cur_len - 1] == '\n')
		{
			buffer[cur_len - 1] = '\0';
			break;
		}
		MAX_LEN = NEW_LEN;
	}
	if (c == 0 && cur_len > 0)
		*n = cur_len;
	*buf = buffer;
	*n = cur_len;
	(*n)--;

	return (*n);
}
