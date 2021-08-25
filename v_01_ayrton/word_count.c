#include "shell.h"

int word_count(char *str)
{
	int i = 0, wc = 1;

	for (; str[i]; i++)
	{
		if ((str[i] == ' ') && (str[i + 1] != ' '))
			wc++;
	}
	return (wc);
}
