#include "shell.h"
/**
 * shell_parse -parse the command line get form input in tokens
 *
 * @input: the input from stdi
 * @delim: the separators to parse the line in tokens
 * Return: pointer to array of strings with the tokens
 */

char **shell_parse(char *input, char *delim)
{
	/* this will be the array of strings (the tokens) */
	char *token = NULL;
	/* count words in input */
	int words = _wordcount(input);
	/* array of strings to store the commands (tokens) */
	/* asign memory for the array of char pointers */
	char **cmds = malloc(sizeof(char *) * (words + 2));
	int i = 0;

	if (!cmds)
	{
		perror("calloc error 1");
		exit(EXIT_FAILURE);
	}
	/* return a pointer to the first token found in str */
	token = strtok(input, delim);
	/* go through other tokens */
	while (token != NULL)
	{
/* deberia hacer un malloc para cada string? */
		cmds[i] = token;
		i++;
		token = strtok(NULL, delim);
	}
	/* one more space for NULL terminate needed by execve */
	cmds[i] = NULL;
	/* do not free cmds, will needed to execute arguments */
	/* will free on main */
	return (cmds);
}
