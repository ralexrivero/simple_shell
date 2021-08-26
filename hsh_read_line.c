#include "shell.h"
/**
 * read_line - read line from standard input
 * Return: pointer to the line entered
 */
char *read_line(void)
{
	char *input = NULL;
	/* define and set to 0 to getline allocate memory */
	size_t buffer_size = 0;

	/* print prompt in color and reset color of input */
	/* return -1 means failure reading line or reading EOF */
	if (getline(&input, &buffer_size, stdin) == -1)
	{
		free(input);
		/* If receive and EOF (end of file) */
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("getline failure\n");
			exit(EXIT_FAILURE);
		}
	}
	return (input);
	/* returns input with an EOF */
}
