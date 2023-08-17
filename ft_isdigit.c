#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c = '2';
    printf("%i\n", ft_isdigit(c));
    printf("%i", isdigit(c));  
    return 0;
}
*/
