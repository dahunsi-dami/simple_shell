#include "main.h"

/**
 * _putchar - prints given character c to stdout of 1.
 *
 * @c: character to be printed
 *
 * Return: returns 1 if successful and -1 if error's encountered
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
