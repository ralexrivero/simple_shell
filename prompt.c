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
        // shell_initialize();
        /* loop waiting for commands */
        shell_interprete();
        /* return 0 to terminate the shell and free */
        // shell_terminate();
        return (EXIT_SUCCESS);
}
void shell_initialize(void)
{
}
/**
 * @brief shell interprete
 * 
 * @return void* 
 */
void *shell_interprete(void)
{
        ssize_t varSST_read = 0;
        size_t varSTp_read_bytes = 0;
        char * varChr_str = NULL;
        
        /* print a prompt */
        write(1, "\033[1;36m$ \033[0m", 14);

        varSTp_read_bytes = getline( &varChr_str, &varSST_read, stdin );
        write(1, varChr_str, varSST_read);
        
        free(varChr_str);
}

char *shell_read_line(void)
{
        ssize_t varSST_read = 0;
        size_t varSTp_read_bytes = 0;
        char * varChr_str = NULL;

        varSTp_read_bytes = getline( &varChr_str, &varSST_read, stdin );

        write(1, varChr_str, varSST_read);
        
        free(varChr_str);
}

char **shell_tokenize_line(char *varChr_line)
{
}


int shell_execute_args(char **varChr_args)
{

}

void shell_terminate(void)
{

}