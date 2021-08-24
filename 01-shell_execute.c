#include "shell.h"

/**
 * shell_execute -executes a command from the input
 *
 * @arguments: the arguments to be executed
 * @pathparsed: thepath parsed from the input to try the first argument
 * Return: 1 to return to the init and continue the loop
 */
int shell_execute(char **arguments, char **pathparsed)
{
	/* fork declaration */
	pid_t pid;
	int status, i = 0;
	char *eval_cmd = NULL;

	/* prompt if enter NULL */
	if (arguments[0] == NULL)
	return (1);
	/* prompt if press enter only*/
	/* if (arguments[0] == '\n')
	return (1); */

	/* fork current process and save status */
	pid = fork();
	/* child process is pid 0 */
	if (pid == -1)
	{
		perror("fork error");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
	/* combine path, slash and command */
	for (i = 1; pathparsed[i] != NULL; i++)
	{
		eval_cmd = malloc(sizeof(char) * (strlen(pathparsed[i])
		 + _strlen(arguments[0]) + 2));
		_strcpy(eval_cmd, pathparsed[i]);
		_strcat(eval_cmd, "/");
		_strcat(eval_cmd, arguments[0]);
		/* look if can access command */
		if (access(eval_cmd, X_OK) == 0)
		{
			/* if can access, execute command */
			if (execve(eval_cmd, arguments, NULL) == -1)
			{
				perror("execve error");
				}
				exit(EXIT_FAILURE);
				}
		free(eval_cmd);
	}
			if (pathparsed[i] == NULL)
		{
			if (access(arguments[0], X_OK))
			{
				printf("x\n");
			/* if can access, execute command */
			if (execve(eval_cmd, arguments, NULL) == -1)
			{
				perror("execve error");
				}
				exit(EXIT_FAILURE);
		}
			}
				}
				else
				/* wait parent process */
				{
					wait(&status);
					}
					return (1);
}