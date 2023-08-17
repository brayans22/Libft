#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    if (!lst)
		return ;
	while (*lst)
	{	
        tmp = (*lst) -> next;
		ft_lstdelone(*lst, del);
		(*lst) = tmp;
	}
    *lst = NULL;
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
 
    //Creo un puntero a la funcion print_content y otro a la funcion del
    void (*p_print)(void *e);  
    p_print = &print_content;
    void (*p_del)(void *e);  
    p_del = &del;


    //PRINT LIST
    ft_lstiter(*l, p_print);

    //DELETE LIST
    ft_lstclear(l, p_del);

    //PRINT LIST
    ft_lstiter(*l, p_print);

    return (0);
}   
*/