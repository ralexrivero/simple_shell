#include "shell.h"

int main(void)
{
	char *line = NULL, **args = NULL;
	int status = 1;

	while (status)
	{
		write(1, "$ ", 2);
		line = read_line();
		args = tokenize(line);
		status = hsh_execute(args);
		free(line);
		free(args);
	}
	return (0);
}
