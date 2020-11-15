#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new;
	t_list		*list;

	if (!lst)
		return (NULL);
	if (!(list = ft_lstnew(f(lst->content))))
		return (NULL);
	new = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		list = list->next;
	}
	return (new);
}
