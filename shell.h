#ifndef SHELL_H
#define SHELL_H

/* start buffer */

/**
 * @brief prompt character and color style
 * the \033[ way
 * usage: WAY RED to print red
 * usage: WAY B CYN bold cyan
 */
#define PROMPT "$ "
#define WAY "\033["
#define DEF "0m"
#define BLK "30m"
#define RED "31m"
#define GRN "32m"
#define YLW "33m"
#define BLU "34m"
#define MAG "35m"
#define CYN "36m"
#define WHI "37m"
#define B "1;"
#define BRAND WAY B CYN 
#define RESET WAY DEF

/* libraries */
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <errno.h>

/* delimiters */

#define COMDELIM " \t\r\n\a"
/* separate in directories the PATH, directories[0] not need  */
#define ENVDELIM ":="

/**
 * @brief prototypes for manage strings
 * everyone emulates the standard function
 * 
 * to implement: perror, 
 *  
 */

int _puts(char *string);
int _strlen(char *string);
int _putchar(char c);
int _wordlen(char *string);
int _wordcount(char *string);
int _worddelimcount(char *string);
int _strcmp(char *s1, char *s2);

/* get environment */
char **set_env(char **envp);
char *_getenv(const char *name, char **envp);
char **fullpath(char *path, char *envdelim);

/* initilize the shell from the environment variables */
int shell_init(char **envp);

/* print prompt */
int prompt_line(void);

/* the basic shell lifetime */
/* read line from input */
char *shell_read(void);

/* separate line from input */
char **shell_parse(char *input, char *delim);

/* the shell commands */
int shell_execute(char **args, char **pathparsed);

/* built-in commands */

#endif
