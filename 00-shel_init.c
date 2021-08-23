#include "shell.h"
/**
 * @brief 
 * 
 * @param envp  
 * @return int 
 */

int shell_init(char **envp)
{
        int loop = 1;
	char *input = NULL;
	char **arguments = NULL;
	char **directories = NULL;

	/* set environement variables */
	directories = set_env(envp);

	printf(WAY RED"init 1 \n" RESET);
        signal(SIGINT, SIG_IGN);

        while (loop)
	{
		printf(WAY RED"init 2 \n"RESET);
		/* print the prompt in loop until exit */
		prompt_line();
		/* get input from user */
		input = shell_read();
		/* separate comands input */
		arguments = shell_parse(input, COMDELIM);
		/* execute programs and commands */
/* 		for(int i = 0; directories[i] != NULL; i++)
		printf("directories:[%d] %s\n",i, directories[i]); */
		loop = shell_execute(arguments, directories);
		/* free */
 		free(arguments);
	}
	free(directories);
	exit (EXIT_SUCCESS);
}