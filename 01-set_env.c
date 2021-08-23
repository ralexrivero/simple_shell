#include "shell.h"

char **set_env(char **envp)
{
        char *path = _getenv("PATH", envp);
        char **pathparsed = fullpath(path, ENVDELIM);

        return(pathparsed);
}

/* int main(int argc, char **argv, char **envp)
{
        (void)argc;
        (void)argv;
        char **envparsed = set_env(envp);
        int i =0;
         for (i = 0; envparsed[i] != NULL; i++)
         {
                 printf("setenv: %s\n", envparsed[i]);
         }
        
        free(envparsed);
} */