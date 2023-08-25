#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*aux;
	
	if (!(aux = (char *) malloc(ft_strlen(s1) + 1)))
		return (NULL);
	i = -1;
	while (s1[++i])
		aux[i] = s1[i];
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
