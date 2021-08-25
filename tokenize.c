#include "shell.h"
#define TOK_BUFSIZE 64
#define TOK_DELIM " \t\r\n\a"

char **tokenize(char *line)
{
	int bufsize = TOK_BUFSIZE, i = 0;
	char **tokens = NULL;
	char *token = NULL;

	tokens = malloc(sizeof(char *) * bufsize);
	if (!tokens)
	{
		fprintf(stderr, "allocation error\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, TOK_DELIM);
	while (token != NULL)
	{
		tokens[i] = token;
		i++;
		if (i >= bufsize)
		{
			bufsize += TOK_BUFSIZE;
			tokens = realloc(tokens, sizeof(char *) * bufsize);
			if (!tokens)
			{
				fprintf(stderr, "allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, TOK_DELIM);
	}
	tokens[i] = NULL;
	return (tokens);
}
