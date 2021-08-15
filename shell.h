#ifndef SHELL_H
#define SHELL_H

/* start buffer to use or realloc */
#define BUFFER_SIZE 1024

/* libraries */
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>

/* the basic shell lifetime */
void shell_initialize(void);
void *shell_interprete(void);
void shell_terminate(void);

/* the shell commands */
char *shell_read_line(void);
char **shell_tokenize_line(char *line);

/* execute */
int shell_execute_args(char **args);

/* built-in commands */


/* built-in commands and functions */

#endif