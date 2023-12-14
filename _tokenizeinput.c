#include "main.h"
/**
 * _tokenizeinput - function that tokenizes the inputted string.
 * @buf: buffer containing input string to be tokenized.
 * @bufc: copy of buffer containing input string.
 * @delim: the delimiter to be used in tokenization.
 *
 * Return: return array containing the tokens.
 */
char **_tokenizeinput(char *buf, char *bufc, const char *delim)
{
	char *token;
	char **tokens;
	int ntoken = 0, i, j;

	token = strtok(buf, delim);
	while (token != NULL)
	{
		ntoken++;
		token = strtok(NULL, delim);
	}
	if (ntoken == 0)
		return (NULL);
	ntoken++;
	tokens = malloc(sizeof(char *) * ntoken);
	if (tokens == NULL)
	{
		perror("malloc");
		free(tokens);
		return (NULL);
	}
	token = strtok(bufc, delim);
	for (i = 0; token != NULL; i++)
	{
		tokens[i] = malloc(sizeof(char) * (strlen(token) + 1));
		if (tokens[i] == NULL)
		{
			perror("malloc");
			for (j = i; j >= 0; j--)
				free(tokens[j]);
			free(tokens);
			free(bufc);
			return (NULL);
		}
		_strcpy(tokens[i], token);
		token = strtok(NULL, delim);
	}
	tokens[i] = NULL;
	free(bufc);
	return (tokens);
}
