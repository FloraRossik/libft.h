#include "libft.h"

t_list      *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elem;
	t_list	*new_lst;

    if (lst == NULL || f == NULL)
		return (NULL);

	new_elem = f(lst);

	if (new_elem == NULL)
		return (NULL);
	new_lst = new_elem;
	while (lst->next != NULL)
    {
		lst = lst-> next;
		new_elem = ft_lstnew(f(lst->content));
		if (new_elem == NULL)
		ft_lstclear(new_lst, del);
			return (NULL);
	}
	return (new_lst);
}