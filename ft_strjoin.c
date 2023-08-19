#include "libft.h"

void    cpy(char *d, const char *s, int pos)
{
    while (*s)
    {
        d[pos] = *s;
        pos++;
        s++;
    }
}

char    *ft_strjoin(const char *s1, const char *s2)
{
    char        *str;
    size_t      len_s1;
    size_t      len_s2;
    
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    str = (char *)malloc((len_s1 + len_s2) + 1);
    if (!s1 || !s2 || !str)
        return (NULL);
    cpy(str, s1, 0);
    cpy(str, s2, len_s1);
    str[len_s1 + len_s2] = '\0';
    return (str);
}