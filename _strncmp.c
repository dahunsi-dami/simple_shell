#include "main.h"

/**
  * _strncmp - compares the first n characters of two strings.
  * @str1: first string
  * @str2: second string
  * @n: size
  * Return: returns null
  */

int _strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
		if (str1[i] != str2[i])
		{
		return (str1[i] - str2[i]);
		}
	if (str1[i] == '\0' || str2[i] == '\0')
		break;

	return (0);
}
