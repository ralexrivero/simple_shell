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

        if (arguments[0] == NULL)
        return (1);

        strcat(cmd, arguments[0]);
        /* fork current process and save status */
        pid = fork();
        /* child process is pid 0 */
        if (pid == -1)
        {
                perror("fork error");
                exit (EXIT_FAILURE);
        }
        else if (pid == 0)
        {
                /* execute the command */
                if(execve(cmd, arguments, argenv) == -1)
                {
                        perror("execve error");
                }
                exit (EXIT_FAILURE);
        }
        else
                /* wait parent process */
        while (!WIFEXITED(status) && !WIFSIGNALED(status))
        {
                waitpid(pid, &status, WUNTRACED);
                
        }
        kill(pid, SIGKILL);
        return (1);
}