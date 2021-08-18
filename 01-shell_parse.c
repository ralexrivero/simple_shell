#include "shell.h"

char **shell_parse(char *input)
{
        /* string to broke in smaller strings (tokens) */
        char *str = NULL;
        /* the string deliminter */
        const char delim[] = " ";
        /* this will be the array of strings (the tokens) */
        char *token = NULL;
        /* array of strings to store the commands (tokens) */
        char **cmds;
        int i = 0, j = 0, words = 0, word_len = 0;
        
        /* count words in input */
        for (; i < _strlen(input); i++)
        {
                if (input[i] == ' ')
                words++;
        }
        words++;

        /* copy the input form stdin to a str */
        /* really does not work because actually
        redirect to str */
        /* have to implement own strcpy function */
        str = input;

        /* return a pointer to the first token found in str */
        token = strtok(str, delim);

        /* asign memory for the array of char pointers */
        cmds = malloc(sizeof(char*) * words);
        /* go through other tokens */
        while (token != NULL)
        {
                word_len = _strlen(token);
                cmds[i] = malloc(sizeof(char) * word_len + 1);
                cmds[i] = token;
                printf("cmds[%d] = %s\n", cmds[i]);
                token = strtok(NULL, delim);
                i++;
        }

        
}