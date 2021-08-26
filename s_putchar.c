#include "shell.h"

/**
 * _putchar - putchar custom function
 * @c: the characer to print
 * Return: print a char to the stdo
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

