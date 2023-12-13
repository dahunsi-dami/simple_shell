#include "main.h"
/**
 * _splitstring - splits a string based on a delimiter & counts tokens.
 * @str: the string to be splitted.
 * @delimiter: the delimiter to use in splitting the string.
 * @tokens: the counted tokens.
 *
 * Return: returns number of tokens or -1.
 */
int _splitstring(char *str, char *delimiter, char ***tokens)
{
	int ntokens;
	char *token;

	ntokens = 0;
	token = strtok(str, delimiter);

	while (token != NULL)
	{
		ntokens++;
		token = strtok(NULL, delimiter);
	}

	*tokens = malloc(sizeof(char *) * (ntokens + 1));
	if (*tokens == NULL)
	{
		perror("Error");
		return (-1);
	}

	return (ntokens);
}
