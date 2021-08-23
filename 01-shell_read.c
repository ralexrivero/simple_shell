#include "shell.h"

/**
 * @brief 
 * 
 * @return char* 
 */
char *shell_read(void)
{
	char *input = NULL;
        /* define and set to 0 to getline allocate memory */
        size_t buffer_size = 0;

        /* print prompt in color and reset color of input */
        printf(WAY RED"read\n"RESET);
        /* return -1 means failure reading line or reading EOF */
        if (getline(&input, &buffer_size, stdin) == -1)
        {
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

/* int main(void)
{
        char * typed = shell_read();
        printf("typed: %s\n", typed);
        return (0);
} */