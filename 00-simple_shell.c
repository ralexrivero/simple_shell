#include "shell.h"
/**
 * main -entry point
 * Description: Simple Shell
 * @argc: argument count, not used
 * @argv: pointer to arguments, not used
 * @envp: pointer to environment variables, used to get PATH
 * Return: always 0
 */
int main(int argc, char **argv, char **envp)
{
	(void) argc;
	(void) argv;
	shell_init(envp);

	return (0);
}