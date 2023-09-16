/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:12:40 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/15 14:10:10 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if ((char) c == '\0')
		return ((char *) s);
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
   char *input;

   input = "teste";
   
   printf("%s\n", (char *)ft_strchr(input, 'e'));

   char *inputt = "teste";
   printf("%s\n", (char *)strchr(inputt, 'e'));


   
   return (0);
}*/
