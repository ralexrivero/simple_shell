#ifndef SHELL_H
#define SHELL_H

/* start buffer to use or realloc */
#define BUFFER_SIZE 1024
#define BUFFER_TOKEN 64

/* libraries */
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>

/* the basic shell lifetime */
char *shell_input(void);
char **shell_tokenize(char *input);
int shell_execute(char **arguments);

/* the shell commands */

/* execute */


/* built-in commands */



#endif
