#include "shell.h"

/**
 * _getenv - get the value of an environment variable
 * @name: name of the environment variable
 * @envp:pointer to the environment variables
 * Return: char* with the matching path
 */
char *_getenv(const char *name, char **envp)
{
	int i = 0, j = 0, compare = 0;

	/* run trough the env variables */
	for (; envp[i] != NULL; i++)
	{
		for (; envp[i][j] != '='; j++)
		{
			/* find ascii 61 and start strcmp */
			compare = _strcmp((char *)name, envp[i]);
			if (compare == 0)
			{
				return (envp[i]);
			}
			break;
		}
	}
	return (envp[i]);
}
