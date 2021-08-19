#include "shell.h"

/**
 * @brief strlen custom function
 * Description: return the length of a string
 * 
 */

int _strlen(char *string)
{
        int length = 0;

        while (*(string + length))
        {
                length++;
        }
        return (length);
}