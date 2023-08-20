#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    char *first;

    first = s;
    if (fd == -1)
        return ;
    while (*s)
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
    ft_putchar_fd('\n', fd);
    s = first;
}