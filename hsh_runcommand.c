#include "shell.h"

int hsh_runcomand(char **args, char **pathparsed)
{
	int i = 0;
	char *eval_cmd = NULL;

	/* combine path, slash and command */
	for (i = 1; pathparsed[i] != NULL; i++)
	{
		eval_cmd = malloc(sizeof(char) * (strlen(pathparsed[i])
		 + _strlen(args[0]) + 2));
		_strcpy(eval_cmd, pathparsed[i]);
		_strcat(eval_cmd, "/");
		_strcat(eval_cmd, args[0]);
		/* look if can access command */
		if (access(eval_cmd, X_OK) == 0)
		{
			/* if can access, execute command */
			if (execve(eval_cmd, args, NULL) == -1)
			{
				perror("execve error");
				}
				exit(EXIT_FAILURE);
				}
		free(eval_cmd);
	}
			if (pathparsed[i] == NULL)
		{
			if (access(args[0], X_OK) == 0)
			{
			/* if can access, execute command */
			if (execve(args[0], args, NULL) == -1)
			{
				perror("execve error");
				}
				exit(EXIT_FAILURE);
		}
			}
        exit(EXIT_SUCCESS);
}