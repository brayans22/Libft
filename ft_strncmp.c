#include "libft.h"

#define NULL_STR '\0'

int wrapped_strncmp(const char *s1, const char *s2, size_t n, size_t i)
{
    if (i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        return (wrapped_strncmp(s1, s2, n, i + 1));
    }
    if (i == n)
        return (0);
    return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    return (wrapped_strncmp(s1, s2, n, 0));
}
/*
size_t i;

    i = 0;
    while (i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        i++;
    }
    if (i == n)
        return (0);
    return ((unsigned char) s1[i] - (unsigned char) s2[i]);
#include <stdio.h>
#include <string.h>
int main()
{
    printf("%i\n", ft_strncmp("hola", "hola", 4));
    printf("%i\n", ft_strncmp("hola juan", "hola", 4));
    printf("%i\n", ft_strncmp("hola", "hola jo", 4));
    printf("%i\n", ft_strncmp("", "", 4));
    printf("%i\n", ft_strncmp("Braa", "Bra", 3));
    printf("%i\n", ft_strncmp("abi", "ban", 5));
    printf("%i\n", ft_strncmp("bray", "rober", 1));

    printf("%i\n", strncmp("hola", "hola", 4));
    printf("%i\n", strncmp("hola juan", "hola", 4));
    printf("%i\n", strncmp("hola", "hola jo", 4));
    printf("%i\n", strncmp("", "", 4));
    printf("%i\n", strncmp("Braa", "Bra", 3));
    printf("%i\n", strncmp("abi", "ban", 5));
    printf("%i\n", strncmp("bray", "rober", 1));
    return 0;
}
*/