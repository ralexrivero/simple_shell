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
	int status = 1, interactive = 0;
	/* dont need argc and argv */
	/* pointer to array of string with the directories. i.e. "usr/bin" */
	char **directories = NULL;

	/* set environement variables */
	directories = set_env(envp);
	(void)argc;
	(void)argv;
	interactive = (isatty(STDIN_FILENO));
	/* loop until exit */
	while (status)
	{
		if (interactive == 1)
		{
			_puts("$ ");
		}
		else
		{
			status = 0;
		}
		/* Ctrl + C signal ignored*/
		/* SIGINT: program interrupt signal or Ctrl + c */
		/* SIG_IGN: signal to ignore */
		signal(SIGINT, handle_ctrlc);
		line = read_line();
		args = tokenize(line);
		status = hsh_execute(args, directories);
		if (line)
		free(line);
		if (interactive == 0)
			free(directories);
	}
	free(directories);
	return (0);
}
