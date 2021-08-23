#include "shell.h"

/**
 * @brief take arguments from input
 * 
 * @param args 
 * @return int 
 */

int shell_execute(char **arguments, char **pathparsed)
{
        /* fork declaration */
        pid_t pid;
        int status, i = 0;
	char *eval_cmd = NULL;

        if (arguments[0] == NULL)
        return (1);
        printf(WAY RED"execute \n"RESET);
        for(int i = 0; pathparsed[i] != NULL; i++)
        printf("path in exec[%d]: %s\n",i, pathparsed[i]);

        /* fork current process and save status */
        pid = fork();
        /* child process is pid 0 */
        if (pid == -1)
        {
                perror("fork error");
                exit (EXIT_FAILURE);
        }
        else if (pid == 0)
        {
	/* combine path, slash and command */
	for (i = 1; pathparsed[i] != NULL; i++)
        {
		eval_cmd = malloc(sizeof(char) * (strlen(pathparsed[i]) + strlen(arguments[0]) + 2));
		strcpy(eval_cmd, pathparsed[i]);
		strcat(eval_cmd,"/");
		strcat(eval_cmd, arguments[0]);
		/* look if can access command */
                if (access(eval_cmd, X_OK)== 0)
                {
                        printf("access: %d\n",access(eval_cmd, X_OK));
                        /* if can access, execute command */
                        if (execve(eval_cmd, arguments, NULL) == -1)
			{
				perror("execve error");
				}
				exit (EXIT_FAILURE);
				}
		printf("eval_cmd: %s\n", eval_cmd);
		free(eval_cmd);
	}

				}
				else
				/* wait parent process */
				{
					wait(&status);
					}
					return (1);
}