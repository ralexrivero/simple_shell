#include "shell.h"

int hsh_cd(char **args)
{
	int check;

	if (args[1] == NULL)
		fprintf(stderr, "expected argument to cd\n");
	check = chdir(args[1]);
	if (check != 0)
		perror("Error:");
	return (1);
}
