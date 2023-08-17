#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	
	i = -1;
	while (++i < n)
	{                         
		if((unsigned char) c == *((unsigned char *)s + i))
			return ((void *)s + i);
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char dest[] = "Brayan J";
    printf("Resultado original: %s\n", (char *)memchr(dest, 'J', 122));
    char s11[] = "Brayan J";
    printf("Resultado copia m: %s\n", (char *)ft_memchr(s11, 'J', 122));
    return 0;
}
*/
