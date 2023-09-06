/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:40:58 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/06 18:57:13 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		*((char *) dest + i) = *((char *) src + i);
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char s1[] = "hola c";
    char s2[] = "abceerr";
    printf("Resultado original: %s\n", (char *)memcpy(s1, s2, 8));
    char s11[] = "hola c";
    char s22[] = "abceerr";
    printf("Resultado copia: %s\n", (char *)ft_memcpy(s11, s22, 8));
    return 0;
}
*/
