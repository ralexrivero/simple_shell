#include "shell.h"

char *shell_get_line(void)
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

int main(__attribute__((unused))int argc, __attribute__((unused))char **argv, __attribute__((unused))char **env)
{
        char *prompt = "$ ";
        int status = 1;

        /* initialize the shell */

        /* loop waiting for commands */

        do {
                write(1, prompt, 2);
                shell_get_line();
        }
        while (status);
        
        

        /* return 0 to terminate the shell and free */
        return (0);
}