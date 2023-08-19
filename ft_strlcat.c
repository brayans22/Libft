#include "libft.h"

size_t 	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    unsigned int    i;
    size_t          len_s;
    size_t          len_d;       

    len_d = ft_strlen(dst);
    len_s = ft_strlen(src);
    if (len_d >= dstsize)
        return (len_s + dstsize);
    i = 0;
    while (src[i] && i < dstsize - len_d)
    {
        dst[i + len_d] = src[i];
        i++;
    }
    if (i + len_d < dstsize)
        dst[i + len_d] = '\0';
    else    
        dst[i + len_d - 1] = '\0';
    
    return (len_d + len_s);
}
/*
#include <string.h>
#include <strings.h>
#include <stdio.h>
int main()
{
    char dest[] = "como";
    char src[] = "Ho";
    printf("Resultado completo: %li\n", ft_strlcat(dest, src, 10));
    printf("Resultado dest: %s\n", dest);
    printf("Resultado src: %s\n", src);
    
    return 0;
}

*/