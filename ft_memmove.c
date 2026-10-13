/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 08:06:58 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/13 08:07:09 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*p1;

	p = (unsigned char *)dest;
	p1 = (const unsigned char *)src;
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
