/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:38:02 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/13 09:45:45 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!p)
		return (NULL);
	while (++i < len_s1)
		p[i] = s1[i];
	i = -1;
	while (++i < len_s2)
		p[i + len_s1] = s2[i];
	p[len_s1 + len_s2] = '\0';
	return (p);
}
