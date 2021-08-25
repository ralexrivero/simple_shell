#include "shell.h"

/**
 * launch_child - fork process and launch command execution
 * @args: pointer to strings of arguments
 * @path: array of strings with the path of PATH (i.e. /bin)
 * Return: always 1 to continue the loop
 */
int launch_child(char **args, char **path)
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
		/* execvp(args[0], args); */
		/* exit(EXIT_SUCCESS); */
		hsh_runcomand(args, path);
	}
	/* if pid is -1 display error */
	else if (pid < 0)
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

/* no se puede usar execvp */