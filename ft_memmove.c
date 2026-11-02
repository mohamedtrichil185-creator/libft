/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <mtraichl@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:21:27 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/24 20:23:06 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*p;
	const char	*p1;

	p = (char *)dest;
	p1 = (const char *)src;
	if (dest == src || !n)
		return (dest);
	if (p > p1)
	{
		while (n--)
			*(p + n) = *(p1 + n);
	}
	else
	{
		while (n--)
			*p++ = *p1++;
	}
	return (dest);
}
