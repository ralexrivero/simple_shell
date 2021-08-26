#include "shell.h"

/**
 * _strlen - custom function to get the length of a string
 * @string: pointer to the string to be measured
 * Return: the length of a string
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

