#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int    i;
	
	i = -1;
	while (++i < n)
		*((char *) s + i) = '\0';
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char w[200] = "holaaa te";
    ft_bzero(w, 10);
    printf("%s", w);
    printf("\n-------------------------\n");
    char v[200] = "holaaa te";
    bzero(v, 10);
    printf("%s", v);
    return 0;
}
*/
