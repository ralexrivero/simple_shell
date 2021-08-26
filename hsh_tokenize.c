#include "shell.h"
#define TOK_DELIM " \t\r\n\a"

/**
 * tokenize - break a string in separated tokens using a set of delimiters
 * @line: line from standar input returned from read_line function
 * Return: array of tokens (strings)
 */
char **tokenize(char *line)
{
	int bufsize = _worddelimcount(line, ' '), i = 0;
	char **tokens = NULL;
	char *token = NULL;
	/* alloc space for tokens */
	tokens = malloc(sizeof(char *) * (bufsize + 1));
	if (!tokens)
	/* check if malloc works propertly */
	{
		free(tokens);
		perror("allocation error");
		exit(EXIT_FAILURE);
	}
	/* take a pointer to the first token */
	token = strtok(line, TOK_DELIM);
	/* run the string until find the end */
	while (token != NULL)
	{
		/* save the token in a array of strings */
		tokens[i] = token;
		i++;
		/* continue breaking the string in token*/
		/* everytime return a pointer to that token */
		token = strtok(NULL, TOK_DELIM);
	}
	tokens[i] = NULL;
	/* return array of strings to main */
	return (tokens);
}
