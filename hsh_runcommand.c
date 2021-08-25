#include "shell.h"
/**
 * hsh_runcomand - combine path with arguments to execute
 * Description: if not found access to path, try to execute the args[0]
 * i.e. /bin/ls
 * @args:
 * @path: 
 * @return 0 on success
 */
int hsh_runcomand(char **args, char **path)
{
	int i = 0;
	char *eval_cmd = NULL;

	/* combine path, slash and command */
	for (i = 1; path[i] != NULL; i++)
	{
		eval_cmd = malloc(sizeof(char) * (strlen(path[i])
		 + _strlen(args[0]) + 2));
		_strcpy(eval_cmd, path[i]);
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
			if (path[i] == NULL)
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