#include "shell.h"

int hsh_execute(char **args)
{
	int i = 0, check = 1;
	char *builtin_str[] = {
		"cd",
		"help",
		"exit",
		NULL
	};

	for (i = 0; builtin_str[i]; i++)
	{
		if (strcmp(builtin_str[i], args[0]) == 0)
			break;
	}
	switch (i)
	{
		case 0:
			check = hsh_cd(args);
			break;
		case 1:
			check = hsh_help();
			break;
		case 2:
			check = hsh_exit();
			break;
		default:
			check = launch_child(args);
			break;
	}
	return (check);
}
