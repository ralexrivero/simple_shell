#include "shell.h"

/**
 * @brief take arguments from input
 * 
 * @param args 
 * @return int 
 */

int shell_execute(char **arguments)
{
        /* fork declaration */
        pid_t pid;
        int status;
        /* execve declaration */
        /* "PATH=/usr/local/sbin/:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games",NULL}; */
        char cmd[] = "/usr/bin/";
        char * argenv[] = {NULL};

        strcat(cmd, arguments[0]);
        /* fork current process and save status */
        pid = fork();
        /* child process is pid 0 */
        if (pid == -1)
        {
                perror("fork error");
                exit (EXIT_FAILURE);
        }
        if (pid == 0)
        {
                /* execute the command */
                if(execve(cmd, arguments, argenv) == -1)
                {
                        perror("execve error");
                }
                exit(EXIT_FAILURE);
        }
        else
        {
                /* wait parent process */
                wait(&status);
        }
        free(arguments);
        return (0);
}