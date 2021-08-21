#include "shell.h"

/**
 * @brief main entry point
 * Description: simple shell
 * 
 * @return int 0
 */

int main(void)
{
	int status = 1;
	char *input;
	char **arguments;

	/* Handle Ctrl+C: not quit when the user inputs ^C */
	/* otherwise you can use Ctrl+D or EOF to exit */
	signal(SIGINT, SIG_IGN);

        while (status)
	{

		_puts(BRAND PROMPT RESET);
		input = shell_read();
		arguments = shell_parse(input);
		status = shell_execute(arguments);

		free(arguments);
	}
	exit (EXIT_SUCCESS);
}
