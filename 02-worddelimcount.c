#include "shell.h"

/**
 * @brief count the words without the ':' separator, ascii 58
 * Description: return the number of words in string
 */

int _worddelimcount(char *string)
{
        int i = 0, words = 0;

        for (; string[i] != '\0'; i++)
        {
                if (string[i] == 58)
                words++;
        }
        return (words);
}
