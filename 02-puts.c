#include "shell.h"

/**
 * @brief puts custom function
 * 
 */

int _puts(char *string)
{
        int length;

        length = _strlen(string);
        write(1, string, length);
}