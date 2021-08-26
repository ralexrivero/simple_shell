#include "shell.h"
/**
 * _strcat - concatenate two strings (dest + src)
 * @dest: the string to concatenate src
 * @src: initial string
 * Return: the final and concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, res = 0;
	char *str = NULL;

	for (i = 0; dest[i]; i++)
		;
	/* first string - '\0' */
	if (i)
		i -= 1;
	res = res + i;
	for (i = 0; src[i]; i++)
		;
	/* add second string + '\0' */
	res = res + i;
	str = malloc(sizeof(char) * res);
	for (i = 0; dest[i]; i++)
		str[i] = dest[i];
	for (j = 0; src[j]; i++, j++)
		str[i] = src[j];
	str[i] = '\0';

	return (dest);
}
