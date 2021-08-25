#include "shell.h"

int _strlen(char *str)
{
	int i = 0;

	if (str)
	{
		for (; str[i]; i++)
			;
	}
	return (i);
}
