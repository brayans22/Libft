/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:43:30 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/13 15:09:48 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = -1;
	while (++i < (int)n)
		*((char *) s + i) = c;
	return (s);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char v[200] = "";
    memset(v, 'b', 10);
    for (int i = 0; i < 10; i++)
        printf("%c", v[i]);
    printf("\n-------------------------\n");
    char w[200] = "";
    ft_memset(w, 'b', 10);
    for (int i = 0; i < 10; i++)
        printf("%c", w[i]);
    printf("\n");
    return 0;
}
*/
