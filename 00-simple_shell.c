#include "shell.h"

/**
 * @brief main entry point
 * Description: simple shell
 * 
 * @return int 0
 */

int main(void)
{
	/* Handle Ctrl+C: not quit when the user inputs ^C */
	/* otherwise you can use Ctrl+D or EOF to exit */
	signal(SIGINT, SIG_IGN);
        while (1)
	{
		char *input = NULL;
		char **arguments = NULL;
 
		input = shell_read();
		arguments = shell_parse(input);
		shell_execute(arguments);
	}
}
