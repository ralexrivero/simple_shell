#include "shell.h"

/**
 * set_env - get the environment variables
 *
 * @envp: pointer to the environment variables
 * Return: pointer to array of paths
 */
char **set_env(char **envp)
{
	/* get path string*/
	char *path = _getenv("PATH", envp);
	/* tokenize path */
	char **pathparsed = fullpath(path, ENVDELIM);
	
	return (pathparsed);
}
