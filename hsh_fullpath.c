#include "shell.h"

/**
 * fullpath - get the full path of the environment
 *
 * @path: pointer to the path from getenv function
 * @envdelim: the deliminter to parse the path
 * Return: pointer to array of string with every single path
 */

char **fullpath(char *path, char *envdelim)
{
	char *token_dir = NULL;
	int path_q = _worddelimcount(path, ':');

/* tokenize the path */
/* the [0] is "PATH" */
/* the others are directories to try the commands */
	char **directories = malloc(sizeof(char *) * (path_q + 2));
	int i = 0;

	if (!directories)
	{
		free(directories);
		perror("malloc error fullpath 1");
		exit(EXIT_FAILURE);
	}
	token_dir = strtok(path, envdelim);
	while (token_dir != NULL)
	{
		directories[i] = token_dir;
		token_dir = strtok(NULL, envdelim);
		i++;
	}
	directories[i] = NULL;
	path = NULL;
	return (directories);
}
