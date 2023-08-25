#include "libft.h"

char 	*ft_strtrim(char const *s1, char const *set)
{
    char            *result;  
    const char      *first; 
    unsigned int    i;
    unsigned int    start;

    if (!s1 || !set)
        return (NULL);
    first = set;
    start = 0;
    i = 0;
    while (*s1 && *set)
    {
        set = first;
        while(*s1 != *set && *set)
            set++;
        if (*set == '\0')
        {
            result = (char *)malloc(ft_strlen(s1) - start + 2);
            if (!result)
                return (NULL);
            while (*s1)
            {
                result[i++] = *s1;
                s1++;
            }
            result[i] = '\0';
            return (result);
        }
        start++;
        s1++;
    }
    result = (char *)malloc(1);
    if (!result)
        return (NULL);
    result[i] = '\0';
    return (result);
}