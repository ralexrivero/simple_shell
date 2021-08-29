#include "shell.h"

/**
 * hsh_cd - builtin cd: change directory
 * @args: arguments passed to cd
 * Return: always 1
 */
int hsh_cd(char **args)
{
	int check;

	if (args[1] == NULL)
		/* fprintf(stderr, "expected argument to cd\n"); */
		/* cd nos lleva al home */
		puts("Expected argument to cd");
	check = chdir(args[1]);
	free(args);
	if (check != 0)
	{
		perror("Error:");
		free(args);
	}

	return (1);
}
