#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;
	unsigned int i;
	
	i = n;
	d = (char *)dest;
	s = (char *)src;
	if (d == s)
		return (dest);
	else if (d > s)
	{
		while (i-- > 0)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char src[] = "juan";
    char dest[] = "xx";
    printf("%s\n", (char *)memmove(dest, src, 2));
    char srci[] = "juan";
    char desti[] = "xx";
    printf("%s\n", (char *)ft_memmove(desti, srci, 2));
    return (0);
}
*/
