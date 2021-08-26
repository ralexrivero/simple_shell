#include "shell.h"

/**
 * _strcpy - copy the string
 * Description: the string pointed to a buffer
 * @dest: the buffer in where copy the string
 * @src: the string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (src[len] != '\0')
	{
		len++;
		}
		for (i = 0; i <= len; i++)
		{
			dest[i] = src[i];
			}
return (dest);
}

