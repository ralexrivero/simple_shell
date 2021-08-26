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

/*delimiter */
#define ENVDELIM ":="

/* lifetime cicle */
char *read_line(void);
char **tokenize(char *line);
char **set_env(char **envp);
char *_getenv(const char *name, char **envp);
char **fullpath(char *path, char *envdelim);
int hsh_execute(char **args, char **directories);
int hsh_runcomand(char **args, char **pathparsed);

/* child processes */
int launch_child(char **args, char **directories);
int hsh_runcomand(char **args, char **directories);

/* BUILT-INS */
int hsh_cd(char **args);
int hsh_help(void);
int hsh_exit(void);

/* string functions */
char *_strcat(char *str1, char *str2);
int _puts(char *string);
int _putchar(char c);
int word_count(char *str);
int _strlen(char *str);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _worddelimcount(char *string);

/* custom functions */
char *_getline(void);

#endif
