/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:54:26 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/14 15:32:45 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*new_string;

	new_string = (char *)malloc(ft_strlen(s) + 1);
	if (!s || !f || !new_string)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
/*
char    f(unsigned int i, char w)
{
    return (w + i);
}

#include <string.h>
#include <stdio.h>
int main()
{
    char s[] = "ABCDIMELO";

    printf("%s\n", ft_strmapi(s, &f));
    return 0;
}
*/
