#include "shell.h"

int main(int argc, char **argv, char **envp)
{
        (void) argc;
        (void) argv;
        shell_init(envp);

        return (0);
}