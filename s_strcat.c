#include "shell.h"
/**
 * _strcat - concatenate two strings (str1 + str2)
 * @str1: the string to concatenate str2
 * @str2: initial string
 * Return: the final and concatenated string
 */
char *_strcat(char *str1, char *str2)
{
	char *newstring;
	unsigned int len1, len2, newlen, i, j;

	len1 = 0;
	len2 = 0;
	if (str1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; str1[len1]; len1++)
			;
	}
	if (str2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; str2[len2]; len2++)
			;
	}
	newlen = len1 + len2 + 1;
	newstring = malloc(newlen * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		newstring[i] = str1[i];
	for (j = 0; j < len2; j++)
		newstring[i + j] = str2[j];
	newstring[len1 + len2] = '\0';
	return (newstring);
}
