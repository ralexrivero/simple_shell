#include "shell.h"

/**
 * main - entry point
 */

int main(void)
{
char *input;
char **arguments;
int status;
char prompt[] = "\033[1;36m$ \033[0m";

	do {
		write(1, prompt , 15);
input = shell_input();
printf("%s\n", input);
arguments = shell_tokenize(input);
/* status = shell_execute(arguments); */

/* free(input); */
/* free(arguments); */
} while (status); 
}


/**
 * shell_input
 */
char *shell_input(void)
{
	/* when NULL and getline allocate buffer auto */
	char *input = NULL;
	ssize_t buffer = 0;

	if (getline(&input, &buffer, stdin) == -1)
	{
		/* Return the EOF indicator for STREAM.  */
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("Error on input line");
			exit (EXIT_FAILURE);
		}
	}
	return (input);
}

char **shell_tokenize(char *input)
{
	int bufsize = BUFFER_TOKEN, i = 0;
	char **tokens = malloc(bufsize * sizeof(char*));
	char *piece, **tokens_backup;
	char delim[] = " ";

	if (!tokens) {
		perror("malloc error 1");
		exit(EXIT_FAILURE);
	}

	piece = strtok(input, delim);
	while (piece != NULL) {
		tokens[i] = piece;
		i++;

		if (i >= bufsize) {
			bufsize += BUFFER_TOKEN;
			tokens_backup = tokens;
			tokens = realloc(tokens, bufsize * sizeof(char*));
			if (!tokens) 
				free(tokens_backup);
			perror("malloc error 2");
			exit(EXIT_FAILURE);
		}
	}

	piece = strtok(NULL, delim);


tokens[i] = NULL;
return (tokens);
}
