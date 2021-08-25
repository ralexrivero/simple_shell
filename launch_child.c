#include "shell.h"

int launch_child(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		execvp(args[0], args);
		exit(EXIT_SUCCESS);
	}
	else if (pid < 0)
	{
		perror("Error:");
	}
	else
	{
		wait(&status);
	}
	return (1);
}
