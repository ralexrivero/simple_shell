#include "shell.h"

/**
 * @brief putchar custom function
 * Description: print a char
 */

int _putchar(char c)
{
        write(1, &c, 1);
}