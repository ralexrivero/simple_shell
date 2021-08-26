#include "shell.h"

/**
 * launch_child - fork process and launch command execution
 * @args: pointer to strings of arguments
 * @directories: string of path
 * Return: always 1 to continue the loop
 */
int launch_child(char **args, char **directories)
{
	/* process id */
	pid_t pid;
	/* status to conect the child process and parent process*/
	int status;
	/* fork parent process */
	pid = fork();
	/* if is a child process */
	if (pid == 0)
	{
		/* execute the arguments */
		hsh_runcomand(args, directories);
	}
	if (args)
		free(args);
	/* if pid is -1 display error */
	if (pid < 0)
	{
		perror("Error:");
	}
	else
	{
		/* when change status and finish the child process, continue the parent */
		wait(&status);
	}
	/* return to main */
	return (1);
}
