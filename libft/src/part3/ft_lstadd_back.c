#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*Node;

	Node = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (Node->next)
		Node = Node->next;
	Node->next = new;
	new->next = NULL;
}
