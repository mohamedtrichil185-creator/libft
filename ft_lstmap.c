/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 08:03:16 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/17 10:24:51 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*tmp;

	new_head = NULL;
	while (lst)
	{
		tmp = (t_list *)malloc(sizeof(t_list));
		if (!tmp)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		tmp->content = f(lst->content);
		tmp->next = NULL;
		if (!new_head)
			new_head = tmp;
		else
			ft_lstadd_back(&new_head, tmp);
		lst = lst->next;
	}
	return (new);
}
