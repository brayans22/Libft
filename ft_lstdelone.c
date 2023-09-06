/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:31:38 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/06 17:35:29 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}
/*
#include <string.h>
#include <stdio.h>

void del(void *node)
{
    if(!node)
        return ;
    free (node);
    node = NULL;
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return ;
    
    while (lst)
    {
        f(lst -> content);
        lst = lst -> next;
    }
}

int	ft_lstsize(t_list *lst)
{
    size_t i;

    i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

void    print_content(void *e)
{
    printf("%s", (char *)e);
}

int main()
{
    //CREATE NODOS IN HEAP MEMORY
    t_list *nodo_a = (t_list *)malloc(sizeof(t_list));
    t_list *nodo_b = (t_list *)malloc(sizeof(t_list));
    t_list *nodo_c = (t_list *)malloc(sizeof(t_list));
    t_list *nodo_d = (t_list *)malloc(sizeof(t_list));
    t_list *nodo_e = (t_list *)malloc(sizeof(t_list));
    t_list *nodo_f = (t_list *)malloc(sizeof(t_list));

    //CREATE LIST
    nodo_a->content = "se cargo\n";
    nodo_a->next = nodo_b;
    nodo_b->content = "con exito\n";
    nodo_b->next = nodo_c;
    nodo_c->content = "todos los\n";
    nodo_c->next = nodo_d;
    nodo_d->content = "nodos de la\n";
    nodo_d->next = nodo_e;
    nodo_e->content = "lista creada\n";
    nodo_e->next = nodo_f;
    nodo_f->content = "en el heap memory\n";
    nodo_f->next = NULL;

    t_list *l[] = {nodo_a};

    //PRINT LIST
    ft_lstiter(*l, &print_content);

    //DELETE NODE
    ft_lstdelone(nodo_f, &del);

    //PRINT LIST
    ft_lstiter(*l, &print_content);

    return (0);
}   
*/
