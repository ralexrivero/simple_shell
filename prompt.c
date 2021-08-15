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
int main(int argc, char **argv, char **env)
{
        /* initialize the shell */
        shell_initialize();
        /* loop waiting for commands */
        shell_interprete();
        /* return 0 to terminate the shell and free */
        shell_terminate();
        return (EXIT_SUCCESS);
}

/**
 * @brief shell interprete
 * 
 * @return void* 
 */
void *shell_interprete(void)
{
        char *varChr_line = NULL;
        char **varChr_args = NULL;
        int varInt_status = 1;

/*infinite loop waiting command or exit */
        while (varInt_status) {
/* print a prompt */
        write(1, "$ ", 2);
/* read the input line */
        varChr_line = shell_read_line();
/* separete the input line into tokens/arguments */
        varChr_args = shell_tokenize_line(varChr_line);
/* execute the command */
        varInt_status = shell_execute_args(varChr_args);

/* free the line */
        free(varChr_line);
        free(varChr_args);
        }
}

char *shell_read_line(void)
{
        /* when NULL and getline allocate buffer auto */
        char *varChr_line = NULL;
        ssize_t varSST_buffer_size = 0;

        if (getline(&varChr_line, &varSST_buffer_size, stdin) == -1)
        {
                /* Return the EOF indicator for STREAM.  */
                if (feof(stdin))
                {
                        exit(EXIT_SUCCESS);
                        }
                        else
                        {
                                perror("shell_read_line");
                                exit(EXIT_FAILURE);
                                }
                                }
                                return varChr_line;
}

char **shell_tokenize_line(char *varChr_line)
{

}

int lsh_launch(char **varChr_args)
{

}

int shell_execute_args(char **varChr_args)
{

}
