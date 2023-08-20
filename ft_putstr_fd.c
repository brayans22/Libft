#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
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
    s = first;
}