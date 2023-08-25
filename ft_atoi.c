#include "libft.h"

int	ft_atoi(const char *str)
{
	int sign;
	int nb;

	sign = 1;
	nb = 0;
	while (*str == '\t' || *str == '\v' || *str == '\f' || 
		*str == '\n' || *str == ' ' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	return (nb * sign);
}
/*
#include <stdio.h>
int main()
{
    printf ("%i\n", ft_atoi("-123457bb"));
    printf ("%i\n", ft_atoi("--++12bdns"));
    printf ("%i\n", ft_atoi("    -+-+---88"));
    printf ("%i\n", ft_atoi("   --+-----++++++bb"));
    printf ("%i\n", ft_atoi("   --+-----++++++1bb"));
    return (0);
}
*/
