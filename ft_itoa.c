/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:35:40 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/06 17:25:54 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*rev_string(char *str, size_t size)
{
	int		half;
	int		i;
	char	tmp;

	half = size / 2;
	tmp = 0;
	i = 0;
	if (str[0] == '-')
		i = 1;
	while (half > 0)
	{
		tmp = str[i];
		str[i++] = str[size - 1];
		str[size - 1] = tmp;
		size--;
		half--;
	}
	return (str);
}

size_t	len_number(int nb)
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
	return (nb);
}

char	*convert_int_to_string(int n)
{
	char			*digits;
	unsigned int	i;
	int				digit;

	digits = (char *)malloc(len_number(n) + 1);
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
		digits[i++] = digit + '0';
		n = n / 10;
	}
	digits[i] = '\0';
	return (rev_string(digits, i));
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
