#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
/*
#include <stdio.h>
int main()
{
    //NUEVO
    t_list *new = (t_list *)malloc(sizeof(t_list));
    new->content = "Vamos los pibeeeees";
    new->next = NULL;

    //RELLENO
    t_list *w = (t_list *)malloc(sizeof(t_list));
    w->next = NULL;
    w->content = "HOLAA";

    t_list *list [] = {w};
    
    ft_lstadd_back(list, new);
    printf("SIZE LIST 1: %i\n", (int)ft_lstsize(*list));
    printf("ULTIMO LIST 1: %s\n", (char *)ft_lstlast(*list)->content);
    printf("SIZE LIST 1: %i\n", (int)ft_lstsize(*list));

    return (0);
}
*/
