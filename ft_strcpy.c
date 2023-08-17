#include "libft.h"

char    *ft_strcpy(char *dest, const char *src)
{
	size_t i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char    dest[20];
    char    *src = "hola";
    printf ("copia: %s\n", ft_strcpy(dest, src));
    printf ("copia: %s\n", strcpy(dest, src));
    return 0;
}
*/
