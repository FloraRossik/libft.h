#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *copy;

    copy = (* lst);

    if (!*lst)
	{
		*lst = new;
		return;
	}
    if (*lst != NULL)
        {
			copy = ft_lstlast(*lst);
            copy->next = new;
    	}
}