#include "libft.h"

char    *ft_strcpy(char *dest, const char *src)
{
	size_t i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void    free_split_memory(char **split, unsigned int count_strings)
{
    unsigned int    i;

    i = 0;
    while (i < count_strings)
    {
        free(split[i]);
        i++;
    }
    free(split);
}

char    **get_new_split(char **split, char *sub, unsigned int count_strings)
{
    unsigned int    i;
    char            **new_split; 

    i = -1;
    new_split = (char **)malloc(sizeof(char *) * count_strings);
    if (!new_split)
    {
        free_split_memory(split, count_strings);
        return (NULL);
    }
    while (++i < count_strings - 1)
    {
        new_split[i] = (char *)malloc(ft_strlen(split[i]) + 1);
        if (!new_split[i])
        {
            free_split_memory(new_split, i - 1);
            return (NULL);
        }
        ft_strcpy(new_split[i], split[i]);
    }
    free_split_memory(split, count_strings - 1);
    new_split[i] = (char *)malloc(ft_strlen(sub) + 1);
    if (!new_split[i])
    {
        free_split_memory(new_split, count_strings - 1);
        return (NULL);
    }   
    ft_strcpy(new_split[i], sub);
    return (new_split);
}

char    **ft_split(char const *s, char c)
{
    char            *sub;
    char            **split;
    unsigned int    index_start_substr;
    unsigned int    i;
    unsigned int    count_strings;

    if(!s)
        return (NULL);
    i = 0;
    index_start_substr = 0;
    count_strings = 0;
    while (s[i])
    {    
        if ((s[i] == c) || (index_start_substr != 0 && s[i + 1] == '\0'))
        {
            if (index_start_substr == 0)
                sub = ft_substr(s, index_start_substr + 1, i);
            else
                sub = ft_substr(s, index_start_substr + 1, i - index_start_substr - 1);
            index_start_substr = i;
            if (!sub)
            {
                free_split_memory(split, count_strings);
                return (NULL);
            }
            count_strings++;
                      if (count_strings == 1)
            {
                split = (char **)malloc(sizeof(char *) * count_strings);
                split[0] = (char *)malloc(ft_strlen(sub) + 1);
            }
            
            spl
  it = get_new_split(split, sub, count_strings);
            free(sub);
            if (!split)
                return (NULL);
            
        }
        i++;
    }
    if (index_start_substr == 0)
        return (get_new_split(split, ft_substr(s, index_start_substr, i), count_strings + 1));
    return (split);
}

#include <stdio.h>
#include <string.h>
int main()
{
    //char *v = "          ";
    char *seg = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";

    char **split = ft_split(seg, ' ');

    for (int i = 0; i < 12; i++)
    {
        printf("%s\n", split[i]);
    }
    return 0;
}