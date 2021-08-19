#include "shell.h"

char **shell_parse(char *input)
{
        /* string to broke in smaller strings (tokens) */
        char *str = NULL;
        /* the string deliminter */
        const char delim[] = " \t\n";
        /* this will be the array of strings (the tokens) */
        char *token = NULL;
        /* array of strings to store the commands (tokens) */
        char **cmds;
        int i = 0, words = 0, word_len = 0;
        
        /* count words in input */
        words = _wordcount(input);
        /* copy the input form stdin to a str */
        /* really does not work because actually
        redirect to str */
        /* have to implement own strcpy function */
        str = input;
        /* return a pointer to the first token found in str */
        token = strtok(str, delim);      
        /* asign memory for the array of char pointers */
        
        cmds = malloc(sizeof(char*) * words);
        if (!cmds)
        {
                perror("malloc error 1");
                exit (EXIT_FAILURE);
        }
        /* go through other tokens */
        i = 0;
        while (token != NULL)
        {
                word_len = _wordlen(token);
               /* asign memory to each pointer for the length of string */
                cmds[i] = malloc(sizeof(char) * word_len);
                cmds[i] = token;
                token = strtok(NULL, delim);
                i++;
        }
        /* one more space for NULL terminate needed by execve */
        cmds[i] = NULL;
        /* do not free cmds, will needed to execute arguments */
        return (cmds);
}