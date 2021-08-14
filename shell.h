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
int shell_initialize(void);
char *shell_interprete(void);
int shell_terminate(void);

/* the shell commands */

/* built-in commands */


#endif