#include "shell.h"

/**
 * @brief main - The main function of the simple shell
 * 
 * @param argc 
 * @param argv 
 * @param envp environment variables
 * @return int 
 */


int main(int argc, char **argv, char **envp)
{
        (void) argc;
        (void) argv;
        printf(WAY RED"main\n"RESET);
        shell_init(envp);

        return (0);
}