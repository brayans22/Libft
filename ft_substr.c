#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char                    *sub;
    size_t                  i; 

    sub = (char *)malloc((sizeof(char) * len) + 1);
    if (!sub || !s)
        return (NULL);
    i = 0;
    if (start < ft_strlen(s))
    {
        while (i < len  && s[start] != '\0')
            sub[i++] = s[start++];
    }
    sub[i] = '\0';
    return (sub);
}
/*
#include <stdio.h>
int main()
{
    char v[] = "hola";
    printf("Caso start == 0: %s\n", ft_substr(v, 0, 4));
    printf("Caso start == 2: %s\n", ft_substr(v, 2, 4));
    printf("barra 0 %s\n", ft_substr(v, 4, 5));
    return (0);
}
*/