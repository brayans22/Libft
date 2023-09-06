/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:13:34 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/06 19:30:25 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = (char *)malloc(len + 1);
	if (!sub || !s)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (i < len && s[start])
			sub[i++] = s[start++];
	}
	sub[i] = '\0';
	return (sub);
}
/*
#include <stdio.h>
int main()
{
    char v[] = "hola";
    printf("Caso start == 0: %s\n", ft_substr(v, 0, 4));
    printf("Caso start == 2: %s\n", ft_substr(v, 2, 4));
    printf("barra 0 %s\n", ft_substr(v, 4, 5));
    return (0);
}
*/
