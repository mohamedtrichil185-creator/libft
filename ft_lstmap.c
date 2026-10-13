/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 08:03:16 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/13 08:03:18 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = NULL;
	while (lst)
	{
		tmp = (t_list *)malloc(sizeof(t_list));
		if (!tmp)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		tmp->content = f(lst->content);
		tmp->next = NULL;
		if (!new)
			new = tmp;
		else
			ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
