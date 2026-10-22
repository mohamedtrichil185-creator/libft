/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <mtraichl@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:27:21 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/22 09:27:23 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!to_find[0])
		return ((char *)s);
	while (i < len && s[i])
	{
		j = 0;
		if (s[i] == to_find[j])
		{
			while (i + j < len && s[i + j] && to_find[j] == s[i + j])
				j++;
			if (!to_find[j])
				return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}
