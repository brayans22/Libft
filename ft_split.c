#include "libft.h"

char    **get_new_split(char **old_split, char *sub, unsigned int count_strings)
{
    int             i;
    char            **new_split;
    
    new_split = (char **) malloc(sizeof(char *) * (count_strings + 1));
    if (!new_split || !sub)
        return (NULL);
    i = -1;
    while (++i < (int)count_strings - 1)
    {
        new_split[i] = ft_strdup(old_split[i]);
        if (!new_split[i])
        {
            return (NULL);
        }
    }
    new_split[i++] = ft_strdup(sub);
    new_split[i] = NULL;
    return (new_split);
}

char    **ft_split(char const *s, char c)
{
    char            **split;
    unsigned int    len;
    unsigned int    start;
    unsigned int    i;
    unsigned int    count_strings;

    i = 0;
    count_strings = 0;
    while (s[i])
    {
        len = 0;
        start = 0;
        while (s[i] == c && s[i])
        {
            if (s[i] == '\0' && count_strings == 0)
                return (get_new_split(split, ft_substr(s, start, len), count_strings));
            i++;
        }
        start = i;
        while (s[i] != c && s[i])
        {
            len++;
            i++;
        }
        if (len > 0)
        {
            count_strings++;
            split = get_new_split(split, ft_substr(s, start, len), count_strings);
        }
        else 
            return (NULL);
    }
    return (split);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char *seg =    "juan jose lopez";
    char **split_copy = ft_split(seg, 'w');
    
    int i = 0;
    while (split_copy[i] != NULL)
    {
        printf("%s\n", split_copy[i]);
        i++;
    }
    printf("-----------------------------------------------------------------------------------------------\n");

    char cadena[] = "juan jose lopez";
    char delimitador[] = "w";
    char *token = strtok(cadena, delimitador);
    if(token != NULL){
        while(token != NULL)
        {
            printf("%s\n", token);
            token = strtok(NULL, delimitador);
        }
    }
    return 0;
}
*/