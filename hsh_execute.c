#include "shell.h"
/**
 * hsh_execute - execute builtins and commands
 * @args: pointer to string with arguments to execute
 * args[0] may be a builtin or command (i.e. "cd", "ls")
 * @directories: string of paths
 * Return: int (check) value for loop, if 1 the loop will continue
 */
int hsh_execute(char **args, char **directories)
{
	int i = 0, check = 1; /* check default 1 to continue the loop */
	/* every string represent a builtin */
	char *builtin_str[] = {"cd", "help", "exit", NULL};
	/* prompt if enter NULL */
	if (args[0] == NULL)
	{
		return (1);
	}
	for (i = 0; builtin_str[i]; i++)/* iterate the string */
	{
		/* look for a match */
		if (_strcmp(builtin_str[i], args[0]) == 0)
			break;/* i is the value of the match if found */
	}
	switch (i) /* compare i in everay case, if found launch */
	{
		case 0:
			check = hsh_cd(args); /*check return 1 */
			break;
		case 1:
			check = hsh_help(); /* check return 1 */
			break;
		case 2:
			check = hsh_exit(); /* check return 0 to finish loop*/
			break;
		default: /* dont found match, continue to try a command in path */
			check = launch_child(args, directories);
			break;
	}
	return (check);
}
