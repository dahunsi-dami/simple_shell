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
	int ntoken = 0, i = 0, j;

	token = strtok(buf, delim);
	while (token != NULL)
	{
		ntoken++;
		token = strtok(NULL, delim);
	}
	ntoken++;
	tokens = malloc(sizeof(char *) * ntoken);
	if (tokens == NULL)
	{
		perror("malloc");
		return (NULL);
	}
	token = strtok(bufc, delim);
	while (token != NULL)
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
		i++;
	}
	tokens[i] = NULL;
	free(bufc);
	return (tokens);
}
