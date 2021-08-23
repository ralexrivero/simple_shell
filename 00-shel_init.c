#include "shell.h"

int shell_init(char **envp)
{
        int loop = 1;
	char *input = NULL;
	char **arguments = NULL;
	char **directories = NULL;

	/* set environement variables */
	directories = set_env(envp);

	/* Ctrl + C signal ignored*/
        signal(SIGINT, SIG_IGN);

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
	free(directories);
	exit (EXIT_SUCCESS);
}