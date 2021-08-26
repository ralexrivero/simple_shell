#include "shell.h"
/**
 * _strcat - concatenate two strings (dest + src)
 * @s1: the string to concatenate src
 * @s2: initial string
 * Return: the final and concatenated string
 */
char *_strcat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i = 0;
	char *final_str = NULL;

	if (s1)
	len1 = _strlen(s1);
	if (s2)
		len2 = _strlen(s2);

	final_str = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < len1; i++)
		final_str[i] = s1[i];
	for (; i < len1 + len2; i++)
		final_str[i] = s2[i - len1];

	final_str[i] = '\0'; /* add null terminator */
	return (final_str);
}
