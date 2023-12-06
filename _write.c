#include "main.h"
/**
 * _write - writes a string that's passed to stdout.
 * @s: the string that's passed.
 *
 * Return: unnecessary as function returns void.
 */
void _write(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;

	write(1, s, n);
}
