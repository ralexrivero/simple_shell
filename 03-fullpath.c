#include "shell.h"

char **fullpath(char *path, char *envdelim)
{

	char *token_dir =NULL;
	int path_q = _worddelimcount(path);
/*  	printf("q: %d\n",path_q); */
	printf(WAY RED"fullpath \n"RESET);

/* tokenize the path */
/* the [0] is "PATH" */
/* the others are directories to try the commands */
	char **directories = malloc(sizeof(char*)* (path_q + 3));
	int i = 0;
	if (!directories)
	{
		perror("malloc error fullpath 1");
		exit (EXIT_FAILURE);
	}
	token_dir = strtok(path, envdelim);
	while (token_dir != NULL)
	{
		directories[i] = token_dir;
		token_dir = strtok(NULL, envdelim);
/*  		printf("dir[%d]: %s\n", i, directories[i]); */
		i++;
	}
	directories[i] = NULL;
/* 	printf("dir[%d]: %s\n", i, directories[i]); */
        return (directories);
}

/* int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;

	char *testenv = _getenv("PATH", envp);
	printf("test: %s\n", testenv);
	char ** testdir = fullpath(testenv, ENVDELIM);
	for(int i = 0; testdir[i] != NULL; i++)
	printf("testdir[%d]: %s\n", i, testdir[i]);
	free(testdir);
	return (0);
} */
