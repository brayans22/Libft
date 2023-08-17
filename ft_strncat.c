#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	if (dest && src)
	{
		while (dest[i] != '\0')
			i++;
		while(src[j] != '\0' && j < n)
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char dest[] = "h";
    char src[] = "hola";
    printf("%s\n", strncat(dest, src, 2));
    char desti[] = "h";
    char srci[] = "hola";
    printf("%s\n", ft_strncat(desti, srci, 2));
    return 0;
}
*/
