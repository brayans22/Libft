#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
/*
#include <string.h>
#include <stdio.h>
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

    //CALL FUNCTION
    ft_lstiter(nodo_a, &print_content);

    return (0);
}
*/
