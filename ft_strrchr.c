/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:07:01 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/15 12:19:07 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux = NULL;
	while (*s)
	{
		if (*s == (char) c)
			aux = (char *) s;
		s++;
	}
	if (*s == (char) c)
		return ((char *) s);
	return (aux);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    printf("%s\n", strrchr("Bray JR2", 'B'));
    printf("----------------------------------\n");
    printf("%s\n", ft_strrchr("Bray JR2", 'B'));
    printf("----------------------------------\n");
    printf("%s\n", strrchr("Brayan yJR2", 'y'));
    printf("----------------------------------\n");
    printf("%s\n", ft_strrchr("Brayan yJR2", 'y'));
    printf("----------------------------------\n");
    printf("%s\n", strrchr("Brayan JR2", 0));
    printf("----------------------------------\n");
    printf("%s\n", ft_strrchr("Brayan JR2", 0));
    printf("----------------------------------\n");
    return 0;
}
*/
