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
	/* count lines entered in the shell for record porpouse */
	unsigned int cmd_line = 0;
	/* pointer to save the input */
	char *input = NULL;
	/* pointer to array of string where are the arguments to execute */
	char **arguments = NULL;
	/* pointer to array of string with the directories. i.e. "usr/bin" */
	char **directories = NULL;
	/* interactive mode flag */
	int interactive = 0;

	/* set environement variables */
	directories = set_env(envp);

	/* Ctrl + C signal ignored*/
	signal(SIGINT, SIG_IGN);
	/* save the interactive/non interactive mode */
	interactive = (isatty(STDIN_FILENO));
	printf("interactive: %d\n", interactive);
	/* until 1 continue the proces, if recive 0 terminate */
	while (loop)
	{
		/* add 1 to line count */
		cmd_line++;
		/* print the prompt in loop until exit */
		if (interactive == 1) 
		prompt_line();
		/* function here fo non interactive */
		/* non-interactive mode */
		/* get input from user */
		input = shell_read();
		/* separate comands input */
		arguments = shell_parse(input, COMDELIM);
		/* execute builtin commands */
		
		/* execute commands with arguments */
		loop = shell_execute(arguments, directories);
		/* free */
		free(arguments);
	}
	/* free memory */
	free(directories);
	exit(EXIT_SUCCESS);
}