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
	/* pointer to array of string with the path. i.e. "usr/bin" */
	char **path = NULL;

	/* set environement variables */
	/* un array donde estan todos los directorios con los ejecutables*/
	path = set_env(envp);
	(void)argc;
	(void)argv;

	/* Ctrl + C signal ignored*/
	signal(SIGINT, SIG_IGN);
	while (status)
	{
		_puts("$ ");
		line = read_line();
		args = tokenize(line);
		status = hsh_execute(args, path);
		free(line);
		free(args);
	}
	return (0);
}

/* originalmente al presionar enter da segmentarion fault */
/* sin hacerle cambios */
/* get_env no se puede usar la funcion porque tiene extern */