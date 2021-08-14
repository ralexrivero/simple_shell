#include "shell.h"


/**
 * @brief prints a prompt at stdout
 * wait user input
 * execute the command
 * @argc: number of arguments passed at start the shell
 * @argv: pointer to array or arguments
 * @env: pointer to environment variables
 * @return int 0 when done
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char **argv, __attribute__((unused))char **env)
{
        /* initialize the shell */
        shell_initialize();
        /* loop waiting for commands */
        shell_interprete();
        /* return 0 to terminate the shell and free */
        shell_terminate();
}


char *shell_interprete(void)
{
        int varInt_buffer = BUFFER_SIZE;
        char *varChr_buffer = malloc(sizeof(char) * varInt_buffer);
        int varInt_character = 0;
        /* get a line from the user variables*/
        ssize_t varSST_read;
        /* asign 0 and null makes getline realloc the buffer */
        size_t varSTp_bytes_read = 0;
        char *varChr_stream = NULL;

        /* stop if we have no buffer */
        if (!varChr_buffer)
        {
                printf("Error: malloc() failed\n");
                exit(EXIT_FAILURE);
        }

        /*loop until we have a EOF */
        while (1)
        {
                /* get a line and read a character form stdin*/
                varSST_read = getline(&varChr_stream, &varInt_buffer, stdin);
        }
}

