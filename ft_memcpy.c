/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <mtraichl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:21:02 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/26 13:55:54 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*p;
	const char	*p1;

	if (dest == src || !n)
		return (dest);
	p = (char *)dest;
	p1 = (const char *)src;
	while (n--)
		*p++ = *p1++;
	return (dest);
}
