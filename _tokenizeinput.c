#include "main.h"
/**
 * _tokenizeinput - function that tokenizes the inputted string.
 * @buf: buffer containing input string to be tokenized.
 * @delim: the delimiter to be used in tokenization.
 *
 * Return: return array containing the tokens.
 */
char **_tokenizeinput(char *buf, const char *delim)
{
	char *token;
	char **tokens;
	int ntoken = 0, i = 0;

	token = strtok(buf, delim);
	while (token != NULL)
	{
		ntoken++;
		token = strtok(NULL, delim);
	}
	ntoken++;
	tokens = malloc(sizeof(char *) * ntoken);
	if (tokens == NULL)
		return (NULL);
	token = strtok(buf, delim);
	while (token != NULL)
	{
		tokens[i] = malloc(sizeof(char) * (strlen(token) + 1));
		if (tokens[i] == NULL)
		{
			free(tokens);
			return (NULL);
		}
		_strcpy(tokens[i], token);
		token = strtok(NULL, delim);
		i++;
	}
	tokens[i] = NULL;
	return (tokens);
}
