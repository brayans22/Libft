#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	unsigned int  i;
	unsigned int  j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
		j = 0;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char found[] = "xyxyza";
    char str[] = "xyxyzwxyxyzrxyxyzaaa";
    
    printf("%s\n", strstr(str, found));
    printf("%s\n", ft_strstr(str, found));
    return 0;
}
*/