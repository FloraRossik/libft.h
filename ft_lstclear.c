#include "libft.h"

void    ft_lstclear(t_list **lst, 
void (*del)(void*))
{
    t_list      *new_lst;

    if (*lst == NULL)
        return;
    
    while (*lst)
    {
        new_lst = *lst;
        *lst = (*lst)->next;
        del(new_lst->content);
        free(new_lst);
    }
        free(*lst);
}