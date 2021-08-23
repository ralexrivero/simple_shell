#include "shell.h"

/**
 * shell_init - initilize the shell
 *
 * @envp: pointer to system environment variables
 * Return: 0 on success
 */

int shell_init(char **envp)
{
	/* initilize in 1 for continue loop */
	int loop = 1;
	/* pointer to save the input */
	char *input = NULL;
	/* pointer to array of string where are the arguments to execute */
	char **arguments = NULL;
	/* pointer to array of string with the directories. i.e. "usr/bin" */
	char **directories = NULL;

	/* set environement variables */
	directories = set_env(envp);

	/* Ctrl + C signal ignored*/
	signal(SIGINT, SIG_IGN);

	/* until 1 continue the proces, if recive 0 terminate */
	while (loop)
	{
		/* print the prompt in loop until exit */
		prompt_line();
		/* get input from user */
		input = shell_read();
		/* separate comands input */
		arguments = shell_parse(input, COMDELIM);
		/* execute programs and commands */
		loop = shell_execute(arguments, directories);
		/* free */
		free(arguments);
	}
	/* free memory */
	free(directories);
	exit(EXIT_SUCCESS);
}