#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *here_save;

    here_save = malloc(sizeof(t_list));
        if (here_save == NULL)
            return (NULL);
    
    here_save->content = content;
    here_save->next = NULL;
    return (here_save);
}