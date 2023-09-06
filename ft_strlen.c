/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:18:07 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/06 18:53:54 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wrapper_strlen(const char *s1, size_t i)
{
	if (s1[i] == '\0')
		return (i);
	return (wrapper_strlen(s1, i + 1));
}

size_t	ft_strlen(const char *s1)
{
	return (wrapper_strlen(s1, 0));
}
/*
#include <stdio.h>
int main()
{
    printf("%ld\n", ft_strlen("hola como estas"));
    return 0;
}
*/
