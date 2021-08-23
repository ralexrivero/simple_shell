#include "shell.h"

char *_getenv(const char *name, char **envp)
{
        int i = 0, j = 0, compare = 0;

        printf(WAY RED"_getenv\n"RESET);
        /* run trough the env variables */
        for (;envp[i] != NULL; i++)
        {
                for (; envp[i][j] != '='; j++)
                {
                        /* find ascii 61 and start strcmp */
                        compare = _strcmp((char *)name,envp[i]);
                        if (compare == 0)
                        {
                                return(envp[i]);
                        }
                        break;
                }
        }
        return (envp[i]);
}

/* int main(int argc, char **argv, char **envp)
{
        (void)argc;
        (void)argv;
        char * test = _getenv("PATH", envp);
        printf("test: %s\n", test);
        return (0);
} */