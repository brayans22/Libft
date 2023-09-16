/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:35:40 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/14 14:52:04 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_number(int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	else if (nb <= -2147483648)
		return (11);
	else if (nb > -2147483648 && nb < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*convert_int_to_string(int n)
{
	char			*digits;
	unsigned int	i;
	size_t			len_nb;
	int				digit;

	len_nb = len_number(n);
	digits = (char *)malloc(len_nb + 1);
	if (!digits)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		n = -n;
		digits[i++] = '-';
	}
	while (n > 0)
	{
		digit = n % 10;
		digits[--len_nb] = digit + '0';
		n = n / 10;
		i++;
	}
	digits[i] = '\0';
	return (digits);
}

char	*ft_itoa(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	else if (n < -2147483647)
		return (ft_strdup("-2147483648"));
	else if (n > 2147483647)
		return (ft_strdup("2147483647"));
	return (convert_int_to_string(n));
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    printf("%s\n", ft_itoa(-567));
    printf("%s\n", ft_itoa(-3242));
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(12242));
    printf("%s\n", ft_itoa(234324));
    printf("%s\n", ft_itoa(-2147483648));
}
*/
