#include "shell.h"

int shell_builtin(char **arguments, char **directories)
{
	int i = 0;
	char *builtin_str[] = {
		"cd",
		"help",
		"exit",
		NULL
	};

	for (i = 0; builtin_str[i]; i++)
	{
		if (strcmp(builtin_str[i], arguments[0]) == 0)
			break;
	}
	switch (i)
	{
		case 0:
			hsh_cd(args);
			break;
		case 1:
			hsh_help();
			break;
		case 2:
			hsh_exit();
			break;
		default:
			loop = shell_execute(arguments, directories);
			break;
	}
	return (loop);
}