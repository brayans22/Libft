#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int    i;
	
	i = -1;
	while (++i < n)
		*((char *) s + i) = c;
	return (s);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char v[200] = "";
    memset(v, 'b', 10);
    for (int i = 0; i < 10; i++)
        printf("%c", v[i]);
    printf("\n-------------------------\n");
    char w[200] = "";
    ft_memset(w, 'b', 10);
    for (int i = 0; i < 10; i++)
        printf("%c", w[i]);
    printf("\n");
    return 0;
}
*/
