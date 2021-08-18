#include "shell.h"

/**
 * @brief count the lenght of a string without spaces
 * Description: return the length of the first word in string
 * dont count the ascii 32
 */

int _wordlen(char *string)
{
        int length = 0;

        while (*(string + length) && *(string + length) != 32)
        {
                length++;
        }
        return (length);
}
