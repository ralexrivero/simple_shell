#include "shell.h"
/**
 * word_count - count words in a string
 * @str: string to count words
 * Return: the number of words
 */
int word_count(char *str)
{
	int i = 0, wc = 1;

	for (; str[i]; i++)
	{
		if ((str[i] == ' ') && (str[i + 1] != ' '))
			wc++;
	}
	return (wc);
}
