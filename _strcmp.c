#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: the first string to be compared.
 * @s2: the second string to be compared.
 * Return: always 0 (success).
 */
int _strcmp(char *s1, char *s2)
{
	int i, flag = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = s1[i] - s2[i];
			break;
		}

	}
	return (flag);
}
