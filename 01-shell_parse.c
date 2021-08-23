#include "shell.h"
/**
 * shell_parse
 *
 * @input: 
 * @delim: 
 * Return: char** 
 */

char **shell_parse(char *input, char *delim)
{        
	/* this will be the array of strings (the tokens) */
	char *token = NULL;
	/* count words in input */
	int words = _wordcount(input);
	/* array of strings to store the commands (tokens) */
	/* asign memory for the array of char pointers */
	char **cmds = malloc(sizeof(char*)* (words + 2));
	int i = 0;
	if (!cmds)
	{
		perror("calloc error 1");
		exit (EXIT_FAILURE);
	}
	/* return a pointer to the first token found in str */
	token = strtok(input, delim); 
	/* go through other tokens */
	while (token != NULL)
	{
		/* word_len = _wordlen(token); */
	       /* asign memory to each pointer for the length of string */
/*                 cmds[i] = calloc(sizeof(char), word_len); */
/*                 if(!cmds[i]) */
/*                 {
			perror("calloc error 2");
			exit (EXIT_FAILURE);
		} */
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
