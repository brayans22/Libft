#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    unsigned int    i;
    
    i = 0;
	if (size != 0) 
    {
        while (src[i] != '\0' && i < size - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*<<
#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
int main()
{
    char dest[] = " ";
    char src[] = "Hola bebe";
    printf("Resultado completo: %li\n", strlcpy(dest, src, 0));
    printf("Resultado dest: %s\n", dest);
    printf("Resultado src: %s\n", src);
    
    return 0;
}
*/