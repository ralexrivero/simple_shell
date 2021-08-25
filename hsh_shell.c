#include "shell.h"
/**
 * main - entry point
 * Description: take environment variables and initiate the loop
 * @argc: number of arguments
 * @argv: aguments vector
 * @envp: environment variables
 * Return: always 0 when finish
 */
int main(int argc, char **argv, char **envp)
{
	/* dont need argc and argv */
	(void)argc;
	(void)argv;
	(void)envp;

	char *line = NULL, **args = NULL;
	int status = 1;

	while (status)
	{
		_puts("$ ");
		line = read_line();
		args = tokenize(line);
		status = hsh_execute(args);
		free(line);
		free(args);
	}
	return (0);
}

/* originalmente al presionar enter da segmentarion fault */
/* sin hacerle cambios */