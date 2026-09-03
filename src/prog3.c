#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "parser.h"

#define BUFFER_SIZE 1024

int main()
{
    char line[BUFFER_SIZE];
    char **tokens;
    int i;

    printf("=====================================\n");
    printf("Operating Systems - Week 3 Parser\n");
    printf("=====================================\n");

    while (1)
    {
        printf("myshell> ");

        if (fgets(line, BUFFER_SIZE, stdin) == NULL)
        {
            break;
        }

        if (strcmp(line, "exit\n") == 0)
        {
            break;
        }

        tokens = parse_line(line);

        printf("\nParsed Tokens\n");

        for (i = 0; tokens[i] != NULL; i++)
        {
            printf("argv[%d] = %s\n", i, tokens[i]);
        }

        printf("\n");

        free_tokens(tokens);
    }

    printf("Goodbye!\n");

    return 0;
}
