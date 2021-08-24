#include "shell.h"

int shell_builtin(char **arguments, char **directories)
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
		if (_strcmp(builtin_str[i], arguments[0]) == 0)
			break;
	}
	switch (i)
	{
		case 0:
			check = hsh_cd(arguments);
			break;
		case 1:
			check = hsh_help();
			break;
		case 2:
			check = hsh_exit();
			break;
		default:
			check = shell_execute(arguments, directories);
			break;
	}
	return (check);
}