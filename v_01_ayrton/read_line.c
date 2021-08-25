#include "shell.h"

char *read_line(void)
{
	char *line = NULL;
	ssize_t bufsize = 0;
	size_t len;

	len = getline(&line, &bufsize, stdin);
	if (len == -1)
	{
		if (feof(stdin))
			exit(EXIT_SUCCESS);
		else
		{
			perror("readline");
			exit(EXIT_FAILURE);
		}
	}
	if (line[len - 1] == '\n')
		line[len - 1] = '\0';
	return (line);
}
