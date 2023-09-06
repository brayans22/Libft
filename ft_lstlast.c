/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:33:12 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/06 17:35:53 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
/*
#include <stdio.h>
int main()
{
    t_list *list = (t_list *)malloc(sizeof(t_list) * 5);
    char *content = malloc(5);
    content[0] = 'h';
    content[1] = 'o';
    content[2] = 'l';
    content[3] = 'a';
    content[4] = '\0';
    list[0].next = &list[1];
    list[1].next = &list[2];
    list[2].next = &list[3];
    list[3].next = &list[4];
    list[4].next = &list[5];
    list[5].content = content;
    list[5].next = NULL;
    
    printf("%s\n", (char *)ft_lstlast(list)->content);
    return (0);
}
*/
