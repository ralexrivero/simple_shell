#include "shell.h"

char *_strcat(char *str1, char *str2)
{
	int i = 0, j = 0;

	for (; str1[i]; i++)
		;
	for (; str2[j]; j++)
	{
		str1[i + j] = str2[j];
	}
	str1[i + j] = '\0';
	return (str1);
}
