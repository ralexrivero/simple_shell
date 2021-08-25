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
	char *line = NULL, **args = NULL;
	int status = 1;
	/* dont need argc and argv */
	(void)argc;
	(void)argv;
	(void)envp;

	/* Ctrl + C signal ignored*/
	signal(SIGINT, SIG_IGN);
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
/* get_env no se puede usar la funcion porque tiene extern */