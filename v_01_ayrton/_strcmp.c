#include "shell.h"

int _strcmp(char *s1, char *s2)
{
	int i = 0, flag;

	for (i = 0; s1[i] || s2[i]; i++)
	{
		if ((s1[i] == '\0') || (s2[i] == '\0'))
			break;
		else
			continue;
	}
	if ((s1[i] == '\0') && (s2[i] == '\0'))
		flag = 0;
	else
		flag = -1;
	return (flag);
}
