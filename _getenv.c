#include "shell.h"

char *_getenv(char *c)
{
	extern char **environ;
	int i = 0, j = 0, flag = 0;

	for (; environ[i]; i++)
	{
		flag = 1;
		for (j = 0; c[j]; j++)
			if (environ[i][j] != c[j])
			{
				flag = 0;
				break;
			}
		if (flag)
			return (environ[i] + j + 1);
	}
	return (NULL);
}
