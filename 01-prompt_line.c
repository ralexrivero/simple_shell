#include "shell.h"

int prompt_line(void)
{
        _puts(BRAND PROMPT RESET);
        return (0);
}

/* int main(void)
{
        prompt_line();
        return (0);
} */