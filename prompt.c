#include "shell.h"

int main(__attribute__((unused))int ac, char **av, char **env)
{
        return shell_main(ac, av, env);
}