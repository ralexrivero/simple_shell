#include "shell.h"

/**
 * @brief puts custom function
 * 
 */

int _puts(char *string)
{
        int length;

        length = _strlen(string);
        return(write(1, string, length));
}