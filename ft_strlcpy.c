/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 08:55:25 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/13 08:55:52 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	sl;

	i = 0;
	sl = ft_strlen(src);
	if (!n)
		return (sl);
	while (*src && i < n - 1)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (sl);
}
