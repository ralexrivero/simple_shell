#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>

/* CHILD_PROCESSES */
char *_getenv(char *c);
int word_count(char *str);
int _strlen(char *str);
char *_strcat(char *str1, char *str2);
int _strcmp(char *s1, char *s2);
char *read_line(void);
int launch_child(char **args);
char **tokenize(char *line);
int hsh_execute(char **args);

/* BUILT-INS */
int hsh_cd(char **args);
int hsh_help(void);
int hsh_exit(void);

#endif
