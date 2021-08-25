#include "shell.h"

int hsh_help(void)
{
	int i;
	char *builtin_str[] = {
		"cd",
		"help",
		"exit",
		NULL
	};

	printf("This Shell is for a Holberton School project\n");
	printf("Type program names and arguments, and hit enter.\n");
	printf("The following are built-ins:\n");
	for (i = 0; builtin_str[i]; i++)
		printf(" %s\n", builtin_str[i]);
	printf("Use the man command for information on other programs.\n");

	return (1);
}
