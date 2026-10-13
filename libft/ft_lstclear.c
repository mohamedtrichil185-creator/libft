#include "libft.h"


void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;

	if (!lst)
		return ;
	while (*lst)
	{
		p = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = p;
	}
}
