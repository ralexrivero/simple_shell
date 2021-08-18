#include "shell.h"

/**
 * @brief count the words without the blank spaces
 * Description: return the number of words in string
 */

int _wordcount(char *string)
{
        int i = 0, words = 0;

        for (; string[i] != '\0'; i++)
        {
                if (string[i] !=32 && string[i + 1] == 32)
                words++;
                if (string[i] !=32 && string[i + 1] == '\0')
                words++;
        }
        return (words);
}