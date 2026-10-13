/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 08:24:03 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/13 11:08:42 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*s;
	unsigned char	*p;
	size_t			total_bytes;

	if (!nmemb || !size)
	{
		s = (void *)malloc(1);
		if (!s)
			return (NULL);
		return (s);
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	total_bytes = size * nmemb;
	s = (void *)malloc(total_bytes);
	if (!s)
		return (NULL);
	p = (unsigned char *)s;
	while (total_bytes--)
		*p++ = 0;
	return (s);
}
