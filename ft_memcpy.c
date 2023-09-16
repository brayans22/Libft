/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:00:28 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/15 18:10:37 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	if (!dest && !src && n > 0)
		return (NULL);
	i = -1;
	while (++i < (int)n)
		*((char *) dest + i) = *((char *) src + i);
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
