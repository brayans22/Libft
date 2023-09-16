/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:35:00 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/15 14:10:20 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char				*trim;
	unsigned int		start;		
	unsigned int		end;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *) s1);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end && ft_strchr(set, s1[end]))
		end--;
	trim = ft_substr(s1, start, (end - start) + 1);
	if (!trim)
		return (NULL);
	return (trim);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strtrim("XolX", "lX"));
	return (0);
}
*/
