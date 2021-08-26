#include "shell.h"
/**
 * hsh_help - display custom help in the standard output
 * Return: always 1 to continue the loop
 */
int hsh_help(void)
{
	int i;
	char *builtin_str[] = {
		"cd",
		"help",
		"exit",
		NULL
	};

	_puts("This Simple Shell is for a Holberton School project\n");
	_puts("Type program names and arguments, and hit enter.\n");
	_puts("The following are built-ins:\n");
	for (i = 0; builtin_str[i]; i++)
	{
		_puts(builtin_str[i]);
		_putchar('\n');
	}
	_puts("Use the man command for information on other programs.\n");

	return (1);
}

