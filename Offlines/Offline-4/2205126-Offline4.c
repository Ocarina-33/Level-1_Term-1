// FINAL

#include <stdio.h>
#include <stdlib.h>

char **strTokenize(char *str, char delim);
void _printTokens(char **tokens);
// void _printTokensUnique(char **tokens);
void _freeTokens(char **tokens);

char **strTokenize(char *str, char delim)
{
    int num_oftok = 0;
    int i;
    char **tokens = NULL;
    char *strd = str;

    while (*strd != '\0')
    {
        if (*strd == delim || *(strd + 1) == '\0') // if the last character isn't delim, that's why this *(strd+1)=='\0' condition
        {
            num_oftok++;
        }
        strd++;
    }

    tokens = (char **)malloc((num_oftok + 1) * sizeof(char *)); // allocating memory for a 2D array of pointers, where each pointer points to a string
    if (tokens == NULL)
    {
        printf("memory allocation failed");
        exit(1);
    }
    int token_in = 0;
    strd = str;
    char *start = strd;

    for (; *strd != '\0'; strd++)

    {
        if (*strd == delim || *(strd + 1) == '\0')

        {
            int toklen = strd - start + ((*strd == delim) ? 0 : 1);
            *(tokens + token_in) = (char *)malloc((toklen + 1) * sizeof(char));
            if (*(tokens + token_in) == NULL)
            {
                printf("Memory allocation Failed!");
                exit(1);
            }

            for (i = 0; i < toklen; i++)
            {
                *(*(tokens + token_in) + i) = *(start + i);
            }

            *(*(tokens + token_in) + toklen) = '\0';
            token_in++;
            start = strd + 1; // Moving start pointer to the beginning of the next token
        }
    }

    *(tokens + token_in) = NULL;

    return tokens;
}

void _printTokens(char **tokens)
{
    
    int i = 0;
    while (*(tokens + i) != NULL)
    {
        printf("%s\n", *(tokens + i));
        i++;
    }
}

void _freeTokens(char **tokens)
{
    int i = 0;
    while (*(tokens + i) != NULL)
    {
        free(*(tokens + i));
        i++;
    }
    free(tokens);
}

int main(int argc, char **args)
{
    int string_length;
    scanf("%d", &string_length);

    char delim;
    scanf(" %c", &delim);

    char *str = (char *)malloc(sizeof(char) * (string_length + 1));
    scanf("%s", str);

    // printf("inputs are: %d %c(%d) %s\n", string_length, delim, (int)delim, str);

    char **tokens = strTokenize(str, delim);
    
    printf("The tokens are:\n");
    _printTokens(tokens);
    //  _printTokensUnique(tokens);
    _freeTokens(tokens);

    return 0;
}