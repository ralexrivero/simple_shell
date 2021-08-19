#include "shell.h"

/**
 * @brief count the charactes without the blank spaces
 * Description: return the number of words in string
 */

int _nospace(char *string)
{
        int i = 0, words = 0;

        while (*(string + i))
        {
                if (*(string + i) != 32)
                {
                        words++;
                        if (*(string + i) != 32)
                        i++;
                        if (*(string + i) == 32)
                        i++;
                }
                        
        }
        return (words);
}
