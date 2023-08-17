#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;
	
	aux = NULL;
	while (*s)
	{
		if(*s == c)
			aux = (char *)s;
		s++;
	}
	if (!aux && c != '\0')
		return (NULL);
	else if (c == '\0')
		return ((char *) s);
	return (aux);
}


/*
#include <string.h>
#include <stdio.h>
int main()
{
    printf("%s\n", strrchr("Bray JR2", 'B'));
    printf("----------------------------------\n");
    printf("%s\n", ft_strrchr("Bray JR2", 'B'));
    printf("----------------------------------\n");
    printf("%s\n", strrchr("Brayan yJR2", 'y'));
    printf("----------------------------------\n");
    printf("%s\n", ft_strrchr("Brayan yJR2", 'y'));
    printf("----------------------------------\n");
    printf("%s\n", strrchr("Brayan JR2", 0));
    printf("----------------------------------\n");
    printf("%s\n", ft_strrchr("Brayan JR2", 0));
    printf("----------------------------------\n");
    return 0;
}
*/
