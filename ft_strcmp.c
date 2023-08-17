#include "libft.h"

int wrapped_strcmp(const char * s1, const char * s2, size_t i)
{
    if (s1[i] == '\0' || s2[i] == '\0' || s1[i] != s2[i])
        return (s1[i] - s2[i]);
    return (wrapped_strcmp(s1, s2, i + 1));
}

int ft_strcmp(const char *s1, const char *s2)
{
    return (wrapped_strcmp(s1, s2, 0));
}
/*
#include <stdio.h>
int main()
{
    printf("%i\n", ft_strcmp("hola", "hola"));
    printf("%i\n", ft_strcmp("hola juan", "hola"));
    printf("%i\n", ft_strcmp("hola", "hola jo"));
    printf("%i\n", ft_strcmp("Jose", "Ana"));
    printf("%i\n", ft_strcmp("abi", "ban"));
    return 0;
}

*/
