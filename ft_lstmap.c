#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *current;
	t_list *first;

	first = ft_lstnew(f(lst -> content));
	if (!lst || !f || !del || !first)
		return (NULL);
	current = first;
	lst = lst -> next;
	while (lst)
	{
		current -> next = ft_lstnew(f(lst -> content));
		if (!current)
			return (NULL);
		lst = lst -> next;
		current = current -> next;
	}
	return (first);
}

/*

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst || !del)
        return ;

    del(lst -> content);
    free(lst);
} 

#include <string.h>
#include <stdio.h>

void del(void *node)
{
    if(!node)
        return ;
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

void    print_content(void *nodo)
{
    printf("%s", (char *)nodo);
}

void    *func(void *nodo)
{
    t_list *c = malloc(sizeof(t_list));
    c->content = "NO SOMOS IGUALES\n";
    nodo = c->content;
    return (nodo);
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

    //PRINT LIST
    ft_lstiter(nodo_a, &print_content);

    //CREATE NEW LIST
    t_list *new_list = ft_lstmap(nodo_a, &func, &del);

    //PRINT NEW LIST
    ft_lstiter(nodo_a, print_content);
    ft_lstiter(new_list, print_content);
    

    return (0);
}   
*/
