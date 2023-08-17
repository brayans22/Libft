#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int    i;
	int             is_c;

	is_c = 0;
	while (i < n && !is_c)
	{
		*((char *)dest + i) = *((char *)src + i);
		if (*((char *)src + i) == c)
			is_c = 1;
		i++;
	}
	if (is_c)
		return (dest + i);
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{   
    char dst_goal[] = "abcdnot_touched";

    char src[] = "abcdnot__copied";
	char dst[] = "@@@@not_touched";
    printf("Resultado original: %s\n", (char *)memccpy(dst, src, 'd', sizeof(src)));
    char sr[] = "abcdnot__copied";
	char ds[] = "@@@@not_touched";
    printf("Resultado original: %s\n", (char *)memccpy(ds, sr, 'd', sizeof(sr)));

    printf("Dest original: %i\n", (int)memcmp(dst, dst_goal, sizeof(dst)));
    printf("Dest original: %i\n", (int)memcmp(ds, dst_goal, sizeof(ds)));
    return 0;
}
*/
