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
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>

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
int _nospace(char *string);


/* the basic shell lifetime */
/* read line from input */
char *shell_read(void);

/* separate line from input */
char **shell_parse(char *input);

/* the shell commands */
int shell_execute(char **args);

/* built-in commands */


#endif
