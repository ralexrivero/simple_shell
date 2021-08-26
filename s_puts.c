#include "shell.h"

/**
 * _puts - custom function to print a string of chars in stdo
 * @string: pointer to the string to be printed
 * Return: the string to print
 */

int _puts(char *string)
{
	/* variable to save the length of the string */
	int length = 0;

	length = _strlen(string);
	return (write(STDOUT_FILENO, string, length));
}

