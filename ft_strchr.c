/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:12:40 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/06 19:13:40 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	if (c == '\0')
		return ((char *) s);
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
   char *input;

   input = "abcdefghijklmnopqrstuvwxyz";
   
   printf("%p\n", (char *)ft_strchr(input, '\0'));

   char *inputt = "abcdefghijklmnopqrstuvwxyz";
   printf("%p\n", (char *)strchr(inputt, '\0'));


   
   return (0);
}
*/
