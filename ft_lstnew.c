/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:36:20 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/06 17:37:03 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_nodo;

	new_nodo = (t_list *)malloc(sizeof(t_list));
	if (!new_nodo)
		return (NULL);
	new_nodo->content = content;
	new_nodo->next = NULL;
	return (new_nodo);
}
/*
#include <stdio.h>
int main()
{
    t_list *list;
    char *content = malloc(5);
    content[0] = 'h';
    content[1] = 'o';
    content[2] = 'l';
    content[3] = 'a';
    content[4] = '\0';
    list = ft_lstnew(content);
    printf("%s", ((char*)list->content));
    free(content);
    free(list);
    return (0);
}
*/
