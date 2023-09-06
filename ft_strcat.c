/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:46:55 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/06 18:08:28 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dest && src)
	{
		while (dest[i])
			i++;
		while (src[j])
			dest[i++] = src[j++];
		dest[i] = '\0';
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char dest[] = "h";
    char src[] = "hola";
    printf("%s\n", strcat(dest, src));
    char desti[] = "h";
    char srci[] = "hola";
    printf("%s\n", ft_strcat(desti, srci));
    return 0;
}
*/
