#include "main.h"
/**
 * _strcpy - copies string pointed to by src to buffer pointed by dest
 * @dest: pointer to buffer where string will be pasted
 * @src: pointer to src where string will be copied
 * Return: return pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	dest[a++] = '\0';

	return (dest);
}
