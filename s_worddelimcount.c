#include "shell.h"

/**
 * _worddelimcount - count the words without the ':' separator, ascii 58
 * @string: pointer to the string to count words separeted with delim
 * @delim: delimiter for tokenize strings
 * Return: the number of words in string
 */

int _worddelimcount(char *string, char delim)
{
	int i = 0, words = 0;

	if (string)
	{
		for (; string[i] != '\0'; i++)
		{
			if (string[i] == delim)
			words++;
		}
		words++;
	}
	return (words);
}
