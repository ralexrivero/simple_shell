#include "shell.h"

/**
 * _worddelimcount - count the words without the ':' separator, ascii 58
 *@string: pointer to the string to count words separeted with delim
 * Return: the number of words in string
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
