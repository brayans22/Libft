#include "libft.h"

size_t	wrapped_strlen(const char * s1, size_t i)
{
	if (s1[i] == '\0')
		return (i);
	return (wrapped_strlen(s1, i + 1));
}

size_t	ft_strlen(const char * s1)
{
	return (wrapped_strlen(s1, 0));
}
/*
#include <stdio.h>
int main()
{
    printf("%ld\n", ft_strlen("hola como estas"));
    return 0;
}
*/
