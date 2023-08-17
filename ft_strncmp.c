#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    if (n == 0 || !s1 || !s2)
        return (0);
    else if (*s1 != *s2)
        return (*s1 - *s2);
    return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
}
/*
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