#include "libft.h"

void    free_split_memory(char **split)
{
    unsigned int i;

    i = 0;
    while (split[i] != NULL)
    {
        free(split[i]);
        i++;
    }
    free(split);
}

char    **fill_split(char **dest_split, char **src_split, char *sub, unsigned int count_strings)
{
    unsigned int i;

    i = 0;
    while (i < count_strings - 1)
    {
        dest_split[i] = ft_strdup(src_split[i]);
        if (!dest_split[i])
        {
            free_split_memory(dest_split);
            free_split_memory(src_split);
            free(sub);
            return (NULL);
        }
        i++;
    }
    free_split_memory(src_split);
    dest_split[i] = ft_strdup(sub);
    if (!dest_split[i])
    {
        free(sub);
        free_split_memory(dest_split);
    }
    free(sub);
    dest_split[i + 1] = NULL;
    return (dest_split);
}

char    **get_new_split(char **old_split, char *sub, unsigned int count_strings)
{
    char            **new_split;
    
    if (!sub)
    {
        free_split_memory(old_split);
        return (NULL);
    }
    if (!(new_split = (char **) malloc(sizeof(char *) * (count_strings + 1))))
    {
        free_split_memory(old_split);
        free(sub);
        return (NULL);
    }
    return (fill_split(new_split, old_split, sub, count_strings));
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
    if (!(split = (char **)malloc(sizeof(char *))))
        return (NULL);
    while (s[i])
    {
        len = 0;
        start = 0;
        while (s[i] == c && s[i])
            i++;
        start = i;
        while (s[i] != c && s[i])
        {
            len++;
            i++;
        }
        if (len > 0)
        {
            count_strings++;
            if(!(split = get_new_split(split, ft_substr(s, start, len), count_strings)))
                return (NULL);
        }
    }
    return (split);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char *seg =    "RRRRRRR";
    char **split_copy = ft_split(seg, 'R');
    
    int i = 0;
    while (split_copy[i] != NULL)
    {
        printf("%s\n", split_copy[i]);
        i++;
    }
    printf("-----------------------------------------------------------------------------------------------\n");

    char cadena[] = "RRRRRRR";
    char delimitador[] = "R";
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