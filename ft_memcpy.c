#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	
	i = 0;
	while (i < n)
	{
		*((char *) dest + i) = *((char *) src + i);
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char s1[] = "hola c";
    char s2[] = "abceerr";
    printf("Resultado original: %s\n", (char *)memcpy(s1, s2, 8));
    char s11[] = "hola c";
    char s22[] = "abceerr";
    printf("Resultado copia: %s\n", (char *)ft_memcpy(s11, s22, 8));
    return 0;
}
*/
