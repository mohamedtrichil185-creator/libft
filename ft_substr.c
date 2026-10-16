/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 08:23:58 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/16 15:53:54 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*case_sp(size_t *len, const char *s)
{
	char	*p;

	if (*len <= ft_strlen(s))
		p = (char *)malloc(sizeof(char) * (*len));
	else
	{
		*len = ft_strlen(s);
		p = (char *)malloc(sizeof(char) * (*len));
	}
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(len == start))
		p = case_sp(&len, s);
	else
		p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
