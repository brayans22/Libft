#include "libft.h"

size_t	wrapped_strlen(const char * s1, size_t i)
{	if (s1[i] == '\0')
		return (i);
	return (wrapped_strlen(s1, i + 1));
}

size_t	ft_strlen(const char * s1)
{
	return (wrapped_strlen(s1, 0));
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*aux;
	
	if (!(aux = (char *) malloc(ft_strlen(s1) + 1)))
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		aux[i] = s1[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    printf ("%s\n", ft_strdup("Hola"));
    printf ("%s\n", ft_strdup("Buenas genteee  "));
    printf ("%s\n", ft_strdup(""));
    printf ("%s\n", strdup("Hola"));
    printf ("%s\n", strdup("Buenas genteee  "));
    printf ("%s\n", strdup(""));
    return (0);
}
*/
