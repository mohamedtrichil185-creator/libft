/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <mtraichl@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:26:01 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/22 09:26:04 by mtraichl         ###   ########.fr       */
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
	while (i < n - 1 && *src)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (sl);
}
