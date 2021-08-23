#include "shell.h"

/**
 * _wordlen - count the lenght of a string without spaces
 * @string: pointer to the string to count words
 * Return: the length of the first word in string
 * dont count the ascii 32 or ' '
 */

int _wordlen(char *string)
{
	int length = 0;

	if (!string)
	return (length);
	while (*(string + length) && *(string + length) != 32)
	{
		length++;
	}
	return (length);
}
