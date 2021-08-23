#include "shell.h"

/**
 * prompt_line - print the prompt simbol in color
 * Description: set color, print and reset to default
 * Return: always 0
 */
int prompt_line(void)
{
	_puts(BRAND PROMPT RESET);
	return (0);
}
