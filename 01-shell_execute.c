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
        int i = 0;
        /* execve declaration */
        /* "PATH=/usr/local/sbin/:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games",NULL}; */
        char cmd[] = "/bin/ls";
        char * argv[] = {"ls", NULL};
        char * argenv[] = {NULL};
        /***************************************/
        for (i = 0; i <= _strlen(*arguments); i++)
        printf("cmds[%d]: %s, len = %d\n",i, arguments[i], _wordlen(arguments[i]));
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
                if(execve(cmd, argv, argenv) == -1)
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
        return (status);
}