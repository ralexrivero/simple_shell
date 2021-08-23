#include "shell.h"

/**
 * _wordcount - count the words in a string
 * @string: pointer to the string to count
 * Return: the number of words in string
 */

int _wordcount(char *string)
{
	int i = 0, words = 0;

	for (; string[i] != '\0'; i++)
	{
		if (string[i] != 32 && ((string[i + 1] == 32) ||
		 (string[i] == '\t') || (string[i + 1] == '\n')))
		words++;
		if ((string[i] != 32 || string[i] == '\t') && string[i + 1] == '\0')
		words++;
	}
	return (words);
}
